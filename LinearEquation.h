#include "Equation.h"

namespace EquationSolver {
    class LinearEquation : public Equation {
    public:
        LinearEquation(double a, double b); 
        void solve() const override; 
    private:
        double a_coefficient;
        double b_coefficient;
    };
}
