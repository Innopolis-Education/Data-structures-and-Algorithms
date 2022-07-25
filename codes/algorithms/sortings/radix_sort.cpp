// Copyright 2022 Zener
// Created by Zener on 7/25/2022.
//

#include <cmath>
#include <iostream>

void insertion_sort(int *array, const int &a, const int &size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0) {
            int x = array[j] % static_cast<int>(std::pow(10, a));
            int y = array[j - 1] % static_cast<int>(std::pow(10, a));
            if (x > y) break;

            int temp = array[j];
            array[j] = array[j - 1];
            array[--j] = temp;
        }
    }
}


void radix_sort(int *array, const int &d, const int &size) {
    for (int i = 1; i <= d; i++)
        insertion_sort(array, i, size);
}


void example() {
    int *arr = new int[10];

    std::cout << "Enter 10 numbers, each number has to have 3 digits" << '\n';

    for (int i = 0; i < 10; i++)
        std::cin >> arr[i];

    radix_sort(arr, 3, 10);

    std::cout << "Sorting..." << std::endl;

    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << ' ';
}
