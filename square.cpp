#include "square.h"

namespace Drawing {

    Square::Square(double x, double y, double side) : x(x), y(y), side(side) {}

    void Square::Show() const {
        std::cout << "Square: Left Top Corner (" << x << ", " << y << "), Side: " << side << std::endl;
    }

    void Square::Save(const std::string& filename) const {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << "Square " << x << " " << y << " " << side;
            file.close();
        }
    }

    void Square::Load(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            file >> x >> y >> side;
            file.close();
        }
    }

} // namespace Drawing
