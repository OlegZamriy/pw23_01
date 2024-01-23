#include "Animal.h"

namespace Animals {
    HomeAnimal::HomeAnimal(const std::string& name) : name(name) {}

    void HomeAnimal::Show() const {
        std::cout << "Name: " << name << std::endl;
    }
}
