// Copyright 2022 Zener
// Created by zener on 7/12/2022.
//

#include "Stack_Array.h"
#include <iostream>

void example() {
    StackArray<int> stack(5);

    std::cout << "Is empty: " << stack.isEmpty() << std::endl;

    for (int i = 1; i <= 5; i++)
        stack.push(i);

    std::cout << "Is empty: " << stack.isEmpty() << std::endl;

    std::cout << "Top: " << stack.top() << std::endl;

    std::cout << "Pop: ";
    for (int i = 0; i < 5; i++)
        std::cout << stack.pop() << " ";

    std::cout << "\n"
         << "Is empty: " << stack.isEmpty() << std::endl;
}
