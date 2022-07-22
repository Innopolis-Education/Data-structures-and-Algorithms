// Copyright 2022 Zener
// Created by Zener on 7/22/2022.
//

#include <iostream>
#include <queue>

void quick_sort(std::queue<int> *nums) {
    unsigned int n = nums->size();
    if (n <= 1) return;

    int pivot = nums->front();
    nums->pop();

    std::queue<int> left;
    std::queue<int> right;

    int x;

    while (!nums->empty()) {
        x = nums->front();
        if (x < pivot)
            left.push(x);
        else
            right.push(x);
        nums->pop();
    }

    quick_sort(&left);
    quick_sort(&right);

    while (!left.empty()) {
        nums->push(left.front());
        left.pop();
    }

    nums->push(pivot);

    while (!right.empty()) {
        nums->push(right.front());
        right.pop();
    }
}


void example() {
    std::queue<int> nums;
    int n, x;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        nums.push(x);
    }

    quick_sort(&nums);

    std::cout << "Sorting..." << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << nums.front() << ' ';
        nums.pop();
    }
}
