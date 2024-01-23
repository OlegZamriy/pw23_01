#include "ellipse.h"

namespace Drawing {

    Ellipse::Ellipse(double x, double y, double majorAxis, double minorAxis)
        : x(x), y(y), majorAxis(majorAxis), minorAxis(minorAxis) {}

    void Ellipse::Show() const {
        std::cout << "Ellipse: Top Left Corner (" << x << ", " << y << "), Major Axis: " << majorAxis << ", Minor Axis: " << minorAxis << std::endl;
    }

    void Ellipse::Save(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << "Ellipse " << x << " " << y << " " << majorAxis << " " << minorAxis;
            file.close();
        }
    }

    void Ellipse::Load(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            file >> x >> y >> majorAxis >> minorAxis;
            file.close();
        }
    }

} 