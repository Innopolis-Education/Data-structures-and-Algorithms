// Copyright 2022 Zener
// Created by zener on 7/12/2022.
//

#ifndef CODES_DATA_STRUCTURES_STACK_STACK_ARRAY_H_
#define CODES_DATA_STRUCTURES_STACK_STACK_ARRAY_H_

#include "Stack_Interface.h"
#include <iostream>

template<typename E>
class StackArray : StackInterface<E> {
    int top_element = -1;
    E *array;
    int CAPACITY = 16;


    public:
    /// Default constructor
    StackArray() {
        this(CAPACITY);
    }

    /// Constructor for creating stack with special capacity
    /// \param capacity maximum capacity of the stack
    explicit StackArray(int capacity) {
        array = new E[capacity];
    }

    int size() {
        return top_element + 1;
    }

    bool isEmpty() {
        return top_element == -1;
    }

    E top() {
        if (isEmpty()) return (E) NULL;

        return array[top_element];
    }

    void push(E element) {
        array[++top_element] = element;
    }

    E pop() {
        if (isEmpty()) return (E) NULL;

        return array[top_element--];
    }
};


#endif  // CODES_DATA_STRUCTURES_STACK_STACK_ARRAY_H_
