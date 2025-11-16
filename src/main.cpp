#include <iostream>
#include "lorenz.hpp"

int main() {
    LorenzSystem system;

    std::array<double, 3> state = {1.0, 1.0, 1.0};
    double dt = 0.01;

    for (int i = 0; i < 10000; ++i) {
        state = system.rk4Step(state, dt);

        std::cout << state[0] << " "
                  << state[1] << " "
                  << state[2] << "\n";
    }

    return 0;
}
