// Copyright 2022 Zener
// Created by Zener on 7/14/2022.
//

#include "Linked_List.h"
#include <iostream>

void example() {
    LinkedList<int> list;
    std::cout << "Is list empty? " << list.isEmpty() << std::endl;

    list.add(0, 5);

    std::cout << "Is list empty? " << list.isEmpty() << std::endl;

    std::cout << "Value in the start " << list.get(0) << std::endl;

    std::cout << "Remove value " << list.remove(0) << std::endl;

    std::cout << "Is list empty? " << list.isEmpty() << std::endl;
}
