#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

namespace Drawing {

    class Rectangle : public Shape {
    private:
        double x, y; 
        double width, height; 

    public:
        Rectangle(double x, double y, double width, double height);
        void Show() const override;
        void Save(const std::string& filename) const override;
        void Load(const std::string& filename) override;
    };

} 

#endif // RECTANGLE_H
