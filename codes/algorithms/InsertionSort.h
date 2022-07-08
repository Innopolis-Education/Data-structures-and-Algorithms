#ifndef DATA_STRUCTURES_AND_ALGORITHMS_INSERTIONSORT_H
#define DATA_STRUCTURES_AND_ALGORITHMS_INSERTIONSORT_H

#include <iostream>

using namespace std;

#define SIZE 10

/// Implementation of insertion sort
/// @param array simple array which is had to sort
void insertion_sort(int* array) {
    for (int i = 1; i < SIZE; i++) {
        int key = array[i];
        int j = i-1;

        while (j >= 0 && key < array[j]) {
            swap(array[j], array[j+1]);
            j--;
        }
    }
}

/// Simple example
void example() {
    int arr[SIZE] = {10, 7, 3, 2, 8, 6, 1, 4, 5, 9};

    insertion_sort(arr);

    for (int x : arr) {
        cout << x << " ";
    }
}

#endif //DATA_STRUCTURES_AND_ALGORITHMS_INSERTIONSORT_H