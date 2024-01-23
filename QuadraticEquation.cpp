#include "QuadraticEquation.h"
#include <cmath>
#include <iostream>

namespace EquationSolver {
    QuadraticEquation::QuadraticEquation(double a, double b, double c)
        : a_coefficient(a), b_coefficient(b), c_coefficient(c) {}

    void QuadraticEquation::solve() const {
        double discriminant = b_coefficient * b_coefficient - 4 * a_coefficient * c_coefficient;

        if (discriminant > 0) {
            double root1 = (-b_coefficient + std::sqrt(discriminant)) / (2 * a_coefficient);
            double root2 = (-b_coefficient - std::sqrt(discriminant)) / (2 * a_coefficient);
            std::cout << "Quadratic equation roots: " << root1 << " and " << root2 << std::endl;
        }
        else if (discriminant == 0) {
            double root = -b_coefficient / (2 * a_coefficient);
            std::cout << "Quadratic equation has a double root: " << root << std::endl;
        }
        else {
            std::cout << "Quadratic equation has complex roots." << std::endl;
        }
    }
}
