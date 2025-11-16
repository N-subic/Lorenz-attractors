#include <iostream>
#include <fstream>
#include "lorenz.hpp"

int main() {
    LorenzSystem system;

    std::array<double, 3> state = {1.0, 1.0, 1.0};
    double dt = 0.01;
    int steps = 20000;

    // CSV Datei öffnen
    std::ofstream file("lorenz.csv");
    file << "x,y,z\n";   // CSV Header

    for (int i = 0; i < steps; ++i) {
        state = system.rk4Step(state, dt);

        // CSV Ausgabe
        file << state[0] << "," 
             << state[1] << "," 
             << state[2] << "\n";
    }

    file.close();
    std::cout << "Wrote lorenz.csv\n";

    return 0;
}
