#ifndef DATA_STRUCTURES_AND_ALGORITHMS_STACK_ARRAY_H
#define DATA_STRUCTURES_AND_ALGORITHMS_STACK_ARRAY_H

#include <iostream>
#include "Stack_Interface.h"

template <typename E>
class StackArray : StackInterface<E> {
    int top_element = -1;
    E* array;
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


#endif //DATA_STRUCTURES_AND_ALGORITHMS_STACK_ARRAY_H
