#include "square.h"
#include "rectangle.h"
#include "circle.h"
#include "ellipse.h"
#include<string>

int main() {
    const int numShapes = 4;

    Drawing::Shape* shapes[numShapes] = {
        new Drawing::Square(0, 0, 5),
        new Drawing::Rectangle(2, 3, 8, 6),
        new Drawing::Circle(10, 10, 4),
        new Drawing::Ellipse(15, 8, 5, 3)
    };

    for (int i = 0; i < numShapes; ++i) {
        shapes[i]->Save("shape" + std::to_string(i + 1) + ".txt");
    }

    for (int i = 0; i < numShapes; ++i) {
        shapes[i]->Load("shape" + std::to_string(i + 1) + ".txt");
        shapes[i]->Show();
    }

    for (int i = 0; i < numShapes; ++i) {
        delete shapes[i];
    }

    return 0;
}
