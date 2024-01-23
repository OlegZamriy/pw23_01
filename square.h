#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

namespace Drawing {

    class Square : public Shape {
    private:
        double x, y; 
        double side; 

    public:
        Square(double x, double y, double side);
        void Show() const override;
        void Save(const std::string& filename) const override;
        void Load(const std::string& filename) override;
    };

} 

#endif // SQUARE_H
