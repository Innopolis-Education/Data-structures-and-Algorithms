// Copyright 2022 Zener
// Created by Zener on 7/19/2022.
//
// Find subarray with maximum sum

#include <iostream>

int find_max_cross(const int array[], int low, int mid, int high) {
    int left_sum = INT_MIN, sum = 0;
    for (int i = mid; i >= low; i--) {
        sum += array[i];
        if (sum > left_sum) {
            left_sum = sum;
        }
    }

    int right_sum = INT_MIN;
    sum = 0;
    for (int i = mid + 1; i <= high; i++) {
        sum += array[i];
        if (sum > right_sum) {
            right_sum = sum;
        }
    }
    if (right_sum == INT_MIN && left_sum == INT_MIN) return 0;
    if (right_sum == INT_MIN || left_sum == INT_MIN)
        return std::max(left_sum, right_sum);
    return left_sum + right_sum;
}

int find_max(const int array[], int low, int high) {
    if (low == high) return array[low];
    int mid = (low + high) / 2;

    int left_sum = find_max(array, low, mid);
    int right_sum = find_max(array, mid + 1, high);
    int cross_sum = find_max_cross(array, low, mid, high);

    return std::max(left_sum, std::max(right_sum, cross_sum));
}

void example() {
    int arr[] = {13, -3, -25, 20, -3, -16, -23,
                 18, 20, -7, 12, -5, -22, 15, -4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << find_max(arr, 0, n - 1) << std::endl;
}
