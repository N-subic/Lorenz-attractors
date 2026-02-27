# Lorenz Attractors

A simple simulation of the **Lorenz Attractor**, demonstrating how small variations in initial conditions can lead to dramatically different system behavior.

This project simulates the classical Lorenz system, a famous set of coupled, nonlinear differential equations that produce chaotic dynamics and the characteristic “butterfly” attractor shape.

---

## What is the Lorenz Attractor?

The **Lorenz Attractor** is a dynamical system introduced in 1963 by Edward Lorenz as a simplified mathematical model for atmospheric convection. It is one of the most well-known examples of deterministic chaos and sensitive dependence on initial conditions.

The Lorenz system is defined by the following set of differential equations:

\[
\frac{dx}{dt} = \sigma (y - x)
\]

\[
\frac{dy}{dt} = x (\rho - z) - y
\]

\[
\frac{dz}{dt} = xy - \beta z
\]

Where:

- \(x(t), y(t), z(t)\) — state variables over time  
- \(\sigma, \rho, \beta\) — system parameters  

For the classical parameter values:

- \(\sigma = 10\)  
- \(\rho = 28\)  
- \(\beta = 8/3\)  

the system exhibits chaotic behavior.

---

## Features

- Numerical integration of the Lorenz system
- 3D visualization of trajectories
- Demonstrates sensitivity to initial conditions
- Easily extendable for experimenting with different parameters

---

## Installation & Usage

### Requirements

Make sure you have the following installed:

- A C++ compiler (e.g., `g++`)
- CMake (for building the project)
- Python (optional, for plotting)

### Build

```sh
git clone https://github.com/N-subic/Lorenz-attractors.git
cd Lorenz-attractors
mkdir build && cd build
cmake ..
make
