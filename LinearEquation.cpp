#include "LinearEquation.h"
#include <iostream>

namespace EquationSolver {
    LinearEquation::LinearEquation(double a, double b)
        : a_coefficient(a), b_coefficient(b) {}

    void LinearEquation::solve() const {
        if (a_coefficient != 0) {
            double root = -b_coefficient / a_coefficient;
            std::cout << "Linear equation root: " << root << std::endl;
        }
        else {
            std::cout << "This is not a linear equation." << std::endl;
        }
    }
}
