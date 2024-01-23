#include "LinearEquation.h"
#include "QuadraticEquation.h"

int main() {
    using namespace EquationSolver;

    LinearEquation linearEq(2, -5);
    QuadraticEquation quadraticEq(1, -3, 2);

    linearEq.solve();
    quadraticEq.solve();

    return 0;
}
