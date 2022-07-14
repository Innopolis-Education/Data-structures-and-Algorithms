// Copyright 2022 Zener
// Created by Zener on 7/14/2022.
//

#ifndef CODES_DATA_STRUCTURES_LIST_LINKED_LIST_H_
#define CODES_DATA_STRUCTURES_LIST_LINKED_LIST_H_

#include "ListInterface.h"
#include <iostream>

template<typename T>
struct Node {
    Node *next;
    T value;
    Node() : next(nullptr), value((T) NULL) {}
    Node(Node *next, T value) : next(next), value(value) {}
};

template<typename T>
class LinkedList : ListInterface<T> {
    Node<T> *head = new Node<T>();
    int length = 0;

 public:
    LinkedList() {}

    int size() {
        return length;
    }

    bool isEmpty() {
        return length == 0;
    }

    T get(int i) {
        if (isEmpty() || i >= length) return (T) NULL;

        Node<T> *x = this->head;

        while (x->next != nullptr || i > 0) {
            x = x->next;
            i--;
        }

        return x->value;
    }

    T set(int i, T t) {
        if (isEmpty() || i >= length) return (T) NULL;

        Node<T> *x = this->head;

        while (x->next != nullptr || i > 0) {
            x = x->next;
            i--;
        }

        T value = x->value;
        x->value = t;
        return value;
    }

    void add(int i, T t) {
        Node<T> *x = new Node<T>(nullptr, t);
        Node<T> *temp = this->head;
        while (i > 0 && temp->next != nullptr) {
            i--;
            temp = temp->next;
        }

        if (temp->next != nullptr)
            x->next = temp->next;

        temp->next = x;

        length++;
    }

    T remove(int i) {
        if (isEmpty() || i > length) return (T) NULL;

        Node<T> *x = this->head;

        while (x->next != nullptr && i > 0) {
            i--;
            x = x->next;
        }

        Node<T> *removed = x->next;
        x->next = removed->next;

        length--;

        return removed->value;
    }
};


#endif  // CODES_DATA_STRUCTURES_LIST_LINKED_LIST_H_
