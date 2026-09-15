#include "Stack.h"
#include <iostream>

int main() {
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

    return 0;
}