#pragma once
#include <array>

class LorenzSystem {
public:
    LorenzSystem(double sigma = 10.0, double rho = 28.0, double beta = 8.0/3.0);

    // Computes time-derivative f(x, y, z)
    std::array<double, 3> operator()(const std::array<double, 3>& state) const;

    // Runge-Kutta 4 integration step
    std::array<double, 3> rk4Step(const std::array<double, 3>& state, double dt) const;

private:
    double sigma;
    double rho;
    double beta;
};
