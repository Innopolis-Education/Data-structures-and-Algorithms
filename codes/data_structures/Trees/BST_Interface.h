// Copyright 2022 Zener
// Created by Zener on 7/26/2022.
//

#ifndef CODES_DATA_STRUCTURES_TREES_BST_INTERFACE_H_
#define CODES_DATA_STRUCTURES_TREES_BST_INTERFACE_H_

#include <iostream>


template<typename T>
struct Node {
    Node *parent;
    Node *left;
    Node *right;
    T key;

    Node() : parent(nullptr), left(nullptr), right(nullptr), key((T) NULL) {}
};


template<typename T>
class BinarySearchTreeInterface {
    virtual Node<T> *search(T element) = 0;
    virtual Node<T> *minimum() = 0;
    virtual Node<T> *maximum() = 0;
    virtual void add(T element) = 0;
    virtual Node<T> *remove(T element) = 0;
};

#endif  // CODES_DATA_STRUCTURES_TREES_BST_INTERFACE_H_
