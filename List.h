#ifndef LIST_H
#define LIST_H

namespace DataStructures {
    class List {
    public:
        virtual void insert(int value) = 0;
        virtual void remove() = 0;
        virtual void display() const = 0;
        virtual ~List() {}
    };
}

#endif // LIST_H
