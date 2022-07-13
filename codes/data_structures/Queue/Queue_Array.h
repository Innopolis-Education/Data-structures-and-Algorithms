// Copyright 2022 Zener
// Created by Zener on 7/13/2022.
//

#ifndef CODES_DATA_STRUCTURES_QUEUE_QUEUE_ARRAY_H_
#define CODES_DATA_STRUCTURES_QUEUE_QUEUE_ARRAY_H_

#include "Queue_Interface.h"
#include <iostream>

template<typename E>
class QueueArray : public QueueInterface<E> {
    int head = 0, tail = 0, length = 0;
    E *array;

    int CAPACITY = 16;

 public:
    /// Standard constructor
    QueueArray() {
        this(CAPACITY);
    }

    /// Constructor with special capacity
    /// \param capacity maximum number of elements can be stored to the queue
    explicit QueueArray(int capacity) {
        array = new E[capacity];
        CAPACITY = capacity;
    }

    int size() {
        return length;
    }

    bool isEmpty() {
        return length == 0;
    }

    E first() {
        if (isEmpty()) return (E) NULL;

        return array[head];
    }

    void enqueue(E element) {
        array[tail++] = element;
        if (tail == CAPACITY)
            tail = 0;
        length++;
    }

    E dequeue() {
        E removed = array[head++];
        if (head == CAPACITY)
            head = 0;
        length--;

        return removed;
    }
};


#endif  // CODES_DATA_STRUCTURES_QUEUE_QUEUE_ARRAY_H_
