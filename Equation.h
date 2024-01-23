#ifndef EQUATION_H
#define EQUATION_H

namespace EquationSolver {
    class Equation {
    public:
        virtual void solve() const = 0; 
        virtual ~Equation() = default; 
    };
}

#endif // EQUATION_H
