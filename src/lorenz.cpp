#include "lorenz.hpp"

LorenzSystem::LorenzSystem(double sigma, double rho, double beta)
    : sigma(sigma), rho(rho), beta(beta) {}

std::array<double, 3> LorenzSystem::operator()(const std::array<double, 3>& s) const {
    double x = s[0], y = s[1], z = s[2];

    return {
        sigma * (y - x),
        x * (rho - z) - y,
        x * y - beta * z
    };
}

std::array<double, 3> LorenzSystem::rk4Step(const std::array<double, 3>& state, double dt) const {
    auto f1 = (*this)(state);

    std::array<double, 3> s2 = {
        state[0] + 0.5 * dt * f1[0],
        state[1] + 0.5 * dt * f1[1],
        state[2] + 0.5 * dt * f1[2]
    };

    auto f2 = (*this)(s2);

    std::array<double, 3> s3 = {
        state[0] + 0.5 * dt * f2[0],
        state[1] + 0.5 * dt * f2[1],
        state[2] + 0.5 * dt * f2[2]
    };

    auto f3 = (*this)(s3);

    std::array<double, 3> s4 = {
        state[0] + dt * f3[0],
        state[1] + dt * f3[1],
        state[2] + dt * f3[2]
    };

    auto f4 = (*this)(s4);

    return {
        state[0] + (dt/6.0)*(f1[0] + 2*f2[0] + 2*f3[0] + f4[0]),
        state[1] + (dt/6.0)*(f1[1] + 2*f2[1] + 2*f3[1] + f4[1]),
        state[2] + (dt/6.0)*(f1[2] + 2*f2[2] + 2*f3[2] + f4[2])
    };
}
