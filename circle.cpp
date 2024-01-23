#include "circle.h"

namespace Drawing {

    Circle::Circle(double x, double y, double radius) : x(x), y(y), radius(radius) {}

    void Circle::Show() const {
        std::cout << "Circle: Center (" << x << ", " << y << "), Radius: " << radius << std::endl;
    }

    void Circle::Save(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << "Circle " << x << " " << y << " " << radius;
            file.close();
        }
    }

    void Circle::Load(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            file >> x >> y >> radius;
            file.close();
        }
    }

} 
