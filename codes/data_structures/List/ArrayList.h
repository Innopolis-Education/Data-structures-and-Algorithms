// Copyright 2022 Zener

#ifndef CODES_DATA_STRUCTURES_LIST_ARRAYLIST_H_
#define CODES_DATA_STRUCTURES_LIST_ARRAYLIST_H_

#include "ListInterface.h"
#include <iostream>

template <typename T> class ArrayList : public ListInterface<T> {
  int size_arr = 0;
  T *array;

public:
  int CAPACITY = 16;

  ArrayList() { this(CAPACITY); }

  explicit ArrayList(int capacity) { array = new T[capacity]; }

  int size() { return size_arr; }

  bool isEmpty() { return size_arr == 0; }

  T get(int i) {
    if (i >= size_arr)
      return (T)NULL;

    return array[i];
  }

  T set(int i, T t) {
    if (i >= size_arr)
      return (T)NULL;

    T removed = array[i];
    array[i] = t;

    return removed;
  }

  void add(int i, T t) {
    size_arr++;

    if (i >= size_arr)
      return;
    T temp;

    while (i < size_arr) {
      temp = array[i];
      array[i++] = t;
      t = temp;
    }
  }

  T remove(int i) {
    if (i >= size_arr)
      return (T)NULL;

    T removed = array[i];

    while (i < size_arr - 1) {
      array[i++] = array[i + 1];
    }
    array[i] = (T)NULL;

    size_arr--;
    return removed;
  }
};

#endif // CODES_DATA_STRUCTURES_LIST_ARRAYLIST_H_
