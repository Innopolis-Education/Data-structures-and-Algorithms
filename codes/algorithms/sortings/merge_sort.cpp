// Copyright 2022 Zener
// Created by Zener on 7/21/2022.
//

#include <iostream>

int *merge_sort(int *array, const int size) {
    if (size == 1) return &array[0];

    int median = size / 2;
    int *s1 = new int[median], *s2 = new int[size - median];

    for (int i = 0; i < median; i++)
        s1[i] = array[i];

    for (int i = median; i < size; i++)
        s2[i - median] = array[i];

    s1 = merge_sort(s1, median);
    s2 = merge_sort(s2, size - median);

    int i = 0, j = 0, k = 0;

    while (i < median || j < size - median) {
        if (i == median) {
            array[k] = s2[j++];
        } else if (j == size - median) {
            array[k] = s1[i++];
        } else if (s1[i] < s2[j]) {
            array[k] = s1[i++];
        } else {
            array[k] = s2[j++];
        }
        k++;
    }

    return array;
}

void example() {
    int n;
    std::cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    arr = merge_sort(arr, n);

    std::cout << "Sorting: " << std::endl;

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}
