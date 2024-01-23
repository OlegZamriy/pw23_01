#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

namespace Drawing {

    class Circle : public Shape {
    private:
        double x, y; 
        double radius; 

    public:
        Circle(double x, double y, double radius);
        void Show() const override;
        void Save(const std::string& filename) const override;
        void Load(const std::string& filename) override;
    };

} 

#endif // CIRCLE_H
