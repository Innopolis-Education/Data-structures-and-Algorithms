// Copyright 2022 Zener
// Created by Zener on 7/22/2022.
//

#include <iostream>

int *counting_sort(int *array, const int &size, const int &max) {
    int *sorted = new int[size];
    int *temp = new int[max];

    for (int i = 0; i < max; i++)
        temp[i] = 0;

    for (int i = 0; i < size; i++)
        temp[array[i]-1]++;

    for (int i = 1; i < max; i++)
        temp[i] += temp[i-1];

    for (int i = size-1; i >= 0; i--)
        sorted[--temp[array[i]-1]] = array[i];

    return sorted;
}

void example() {
    int n, x, max = INT_MIN;
    std::cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        if (x > max) max = x;
        arr[i] = x;
    }

    arr = counting_sort(arr, n, max);

    std::cout << "Sorting..." << std::endl;

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << ' ';
}
