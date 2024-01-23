#include "Queue.h"
#include <iostream>

namespace DataStructures {
    void Queue::insert(int value) {
        std::cout << "Queue insert: " << value << std::endl;
    }

    void Queue::remove() {
        std::cout << "Queue remove" << std::endl;
    }

    void Queue::display() const {
        List::display();
        std::cout << "Queue-specific display logic" << std::endl;
    }
}
