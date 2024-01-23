#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>

namespace Drawing {

    class Shape {
    public:
        virtual void Show() const = 0;
        virtual void Save(const std::string& filename) const = 0;
        virtual void Load(const std::string& filename) = 0;
        virtual ~Shape() {}
    };

} 

#endif // SHAPE_H
