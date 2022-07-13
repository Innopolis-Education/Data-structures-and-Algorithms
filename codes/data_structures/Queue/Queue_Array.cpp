// Copyright 2022 Zener
// Created by Zener on 7/13/2022.
//

#include "Queue_Array.h"
#include <iostream>

void example() {
    QueueArray<int> queue(5);

    std::cout << "Is empty queue: " << queue.isEmpty() << std::endl;

    for (int i = 1; i <= 5; i++)
        queue.enqueue(i);

    std::cout << "Is empty queue: " << queue.isEmpty() << std::endl;

    std::cout << "First in the queue: " << queue.first() << std::endl;

    std::cout << "Dequeue: ";

    for (int i = 0; i < 5; i++) {
        std::cout << queue.dequeue() << " ";
    }

    std::cout << "\nIs empty queue: " << queue.isEmpty() << std::endl;
}
