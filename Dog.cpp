#include "Dog.h"

namespace Animals {
    Dog::Dog(const std::string& name) : HomeAnimal(name) {}

    void Dog::Sound() const {
        std::cout << "Woof! Woof!" << std::endl;
    }

    void Dog::Type() const {
        std::cout << "Dog" << std::endl;
    }
}
