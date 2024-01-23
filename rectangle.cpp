#include "rectangle.h"

namespace Drawing {

    Rectangle::Rectangle(double x, double y, double width, double height) : x(x), y(y), width(width), height(height) {}

    void Rectangle::Show() const {
        std::cout << "Rectangle: Top Left Corner (" << x << ", " << y << "), Width: " << width << ", Height: " << height << std::endl;
    }

    void Rectangle::Save(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << "Rectangle " << x << " " << y << " " << width << " " << height;
            file.close();
        }
    }

    void Rectangle::Load(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            file >> x >> y >> width >> height;
            file.close();
        }
    }

}
