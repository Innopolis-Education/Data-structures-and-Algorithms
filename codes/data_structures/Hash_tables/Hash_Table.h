// Copyright 2022 Zener
// Created by Zener on 7/14/2022.
//

#ifndef CODES_DATA_STRUCTURES_HASH_TABLES_HASH_TABLE_H_
#define CODES_DATA_STRUCTURES_HASH_TABLES_HASH_TABLE_H_

#include "Map_Interface.h"
#include <iostream>
#include <string>

/// Implementation of the Hash table using map interface
/// \tparam K type of keys
/// \tparam V type of values
template<typename K, typename V>
class HashTable : MapInterface<K, V> {
    int CAPACITY = 16;
    int length = 0;
    V *array;
    std::hash<int> hash;

 public:
    /// Standard constructor
    HashTable() {
        this(CAPACITY);
    }

    /// Constructor with exact capacity of the hash table
    /// \param capacity
    /// maximum number of elements can be stored in the hash table
    explicit HashTable(int capacity) {
        array = new V[capacity];
        CAPACITY = capacity;
    }

    int size() {
        return length;
    }

    bool isEmpty() {
        return length == 0;
    }

    V get(K key) {
        int i = 0, j;
        do {
            j = hash(key, i);
            if (array[j] != (V) NULL)
                return array[j];
            i++;
        } while (array[j] != NULL && i < CAPACITY);

        return (V) NULL;
    }

    void put(K key, V value) {
        length++;
        int i = 0;
        do {
            int j = hash(key, i);
            if (array[j] == (V) NULL)
                array[j] = value;
            else
                i++;
        } while (i < CAPACITY);
    }

    /// \property Does not work good
    /// due to deletion may affect to other elements
    V remove(K key) {
        length--;
        int i = 0, j;
        do {
            j = hash(key, i);
            if (array[j] != (V) NULL) {
                V temp = array[j];
                array[j] = (V) NULL;
                return temp;
            }
            i++;
        } while (array[j] != NULL && i < CAPACITY);

        return (V) NULL;
    }

    std::string entrySet() {}

    K *keySet() {}

    V *values() {}
};


#endif  // CODES_DATA_STRUCTURES_HASH_TABLES_HASH_TABLE_H_
