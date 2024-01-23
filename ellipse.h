#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

namespace Drawing {

    class Ellipse : public Shape {
    private:
        double x, y; 
        double majorAxis, minorAxis; 

    public:
        Ellipse(double x, double y, double majorAxis, double minorAxis);
        void Show() const override;
        void Save(const std::string& filename) const override;
        void Load(const std::string& filename) override;
    };

} 

#endif // ELLIPSE_H
