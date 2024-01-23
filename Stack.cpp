#include "Stack.h"
#include <iostream>

namespace DataStructures {
    void Stack::insert(int value) {
        std::cout << "Stack insert: " << value << std::endl;
    }

    void Stack::remove() {
        std::cout << "Stack remove" << std::endl;
    }

    void Stack::display() const {
        List::display();
        std::cout << "Stack-specific display logic" << std::endl;
    }
}
