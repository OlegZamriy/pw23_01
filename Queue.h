#ifndef QUEUE_H
#define QUEUE_H

#include "List.h"

namespace DataStructures {
    class Queue : public List {
    public:
        void insert(int value) override;
        void remove() override;
        void display() const override;
    private:
    };
}

#endif // QUEUE_H
#pragma once
