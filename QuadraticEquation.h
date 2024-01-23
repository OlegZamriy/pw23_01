#include "Equation.h"

namespace EquationSolver {
    class QuadraticEquation : public Equation {
    public:
        QuadraticEquation(double a, double b, double c); 
        void solve() const override; 
    private:
        double a_coefficient;
        double b_coefficient;
        double c_coefficient;
    };
}
#pragma once
