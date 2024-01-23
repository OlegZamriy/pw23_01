#include "List.h"
#include "Stack.h"
#include "Queue.h"

int main() {
    using namespace DataStructures;

    Stack myStack;
    myStack.insert(42);
    myStack.remove();
    myStack.display();

    Queue myQueue;
    myQueue.insert(10);
    myQueue.remove();
    myQueue.display();

    return 0;
}
