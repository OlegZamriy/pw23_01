#ifndef STACK_H
#define STACK_H

#include "List.h"

namespace DataStructures {
    class Stack : public List {
    public:
        void insert(int value) override;
        void remove() override;
        void display() const override;
    private:
    };
}

#endif // STACK_H
