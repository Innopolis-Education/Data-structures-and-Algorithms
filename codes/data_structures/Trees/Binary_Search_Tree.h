// Copyright 2022 Zener
// Created by Zener on 7/26/2022.
//

#ifndef CODES_DATA_STRUCTURES_TREES_BINARY_SEARCH_TREE_H_
#define CODES_DATA_STRUCTURES_TREES_BINARY_SEARCH_TREE_H_

#include "BST_Interface.h"
#include <iostream>


template<typename T>
class BinarySearchTree : public BinarySearchTreeInterface<T> {
    Node<T> *root;

    void transplant(Node<T> *u, Node<T> *v) {
        if (u->parent == nullptr)
            this->root = v;
        else if (u == u->parent->left)
            u->parent->left = v;
        else
            u->parent->right = v;
        if (v != nullptr)
            v->parent = u->parent;
    }

 public:
    BinarySearchTree() {
        this->root = new Node<T>();
    }

    Node<T> *search(T element) {
        Node<T> *node = root;
        while (node != nullptr && node->key != element) {
            if (element < node->key)
                node = node->left;
            else
                node = node->right;
        }
        return node;
    }

    Node<T> *minimum() {
        Node<T> *node = root;

        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node<T> *maximum() {
        Node<T> *node = root;
        while (node->right != nullptr) {
            node = node->right;
        }
        return node;
    }

    void add(T element) {
        auto *main = new Node<T>();
        main->key = element;

        Node<T> *node = this->root;
        Node<T> *temp = nullptr;
        while (node != nullptr) {
            temp = node;
            if (main->key < node->key)
                node = node->left;
            else
                node = node->right;
        }
        main->parent = temp;
        if (temp == nullptr)
            this->root = main;
        else if (main->key < temp->key)
            temp->left = main;
        else
            temp->right = main;
    }

    Node<T> *remove(T element) {
        Node<T> *removed = search(element);

        if (removed->left == nullptr) {
            transplant(removed, removed->right);
        } else if (removed->right == nullptr) {
            transplant(removed, removed->left);
        } else {
            Node<T> *node = minimum();
            if (node->parent != removed) {
                transplant(node, node->right);
                node->right = removed->right;
                node->right->parent = node;
            }
            transplant(removed, node);
            node->left = removed->left;
            node->left->parent = node;
        }
        return removed;
    }
};

#endif  // CODES_DATA_STRUCTURES_TREES_BINARY_SEARCH_TREE_H_
