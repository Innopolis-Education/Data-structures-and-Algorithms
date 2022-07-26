// Copyright 2022 Zener
// Created by Zener on 7/26/2022.
//

#include "Binary_Search_Tree.h"
#include <iostream>


void example() {
    BinarySearchTree<int> tree;

    for (int i = 0; i < 10; i++) {
        tree.add(i);
    }

    std::cout << "Minimum: " << tree.minimum() << std::endl;
    std::cout << "Maximum: " << tree.maximum() << std::endl;
    std::cout << "Node with 5: " << tree.search(5) << std::endl;
}
