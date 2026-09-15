// TASK 03 -- Using the Stack ADT
//
// Read this file without ever opening Stack.cpp. You should still be
// able to tell exactly what this program does. That's the ADT promise
// in action: the header alone is enough documentation to use the type.

#include <iostream>
#include "Stack.h"


int main() {
    std::cout << "=== Basic stack test ===" << std::endl;

    Stack stack;

    std::cout << "Is stack empty? "
              << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top value: " << stack.peek() << std::endl;
    std::cout << "Popped value: " << stack.pop() << std::endl;
    std::cout << "New top value: " << stack.peek() << std::endl;
    std::cout << "New stack size: " << stack.size() << std::endl;

    std::cout << std::endl;
    std::cout << "=== Full stack test ===" << std::endl;

    Stack fullStack;

    for (int i = 0; i < 100; i++) {
        fullStack.push(i);
    }

    std::cout << "Full stack size: " << fullStack.size() << std::endl;
    std::cout << "Is stack full? "
              << (fullStack.isFull() ? "Yes" : "No") << std::endl;

    fullStack.push(100);

    std::cout << "Size after rejected push: "
              << fullStack.size() << std::endl;
    std::cout << "Top after rejected push: "
              << fullStack.peek() << std::endl;

    std::cout << std::endl;
    std::cout << "=== Empty stack test ===" << std::endl;

    Stack emptyStack;

    int emptyPopResult = emptyStack.pop();
    int emptyPeekResult = emptyStack.peek();

    std::cout << "Empty pop returned: "
              << emptyPopResult << std::endl;
    std::cout << "Empty peek returned: "
              << emptyPeekResult << std::endl;
    std::cout << "Size after invalid operations: "
              << emptyStack.size() << std::endl;

    return 0;
}
// TRY IT LIVE: ask the class "what data structure is UNDER this stack?"
// Nobody can answer just from reading this file, and that's correct --
// it's not their business. Then open Stack.h to reveal it's a vector.