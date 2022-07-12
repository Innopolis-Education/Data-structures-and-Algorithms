// Copyright 2022 Zener

#ifndef CODES_ALGORITHMS_INSERTIONSORT_H_
#define CODES_ALGORITHMS_INSERTIONSORT_H_

#include <iostream>

/// Implementation of insertion sort
/// @param array a simple array which is had to sort
/// @param size a size of the array
/// @time_complexity best case - O(n)\n average case - O(n^2)\n worst case -
/// O(n^2)
/// @space_complexity 1 (only 2 variables)
void insertion_sort(int *array, int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    while (j >= 0 && key < array[j]) {
      std::swap(array[j], array[j + 1]);
      j--;
    }
  }
}

/// Simple example
void example() {
  int arr[10] = {10, 7, 3, 2, 8, 6, 1, 4, 5, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertion_sort(arr, size);

  for (int x : arr) {
    std::cout << x << " ";
  }
}

#endif  // CODES_ALGORITHMS_INSERTIONSORT_H_
