// Copyright 2022 Zener
// Created by Zener on 7/20/2022.
//

#include <iostream>

int cut_the_rod(int price[], int length) {
    int *arr = new int[length + 1];
    arr[0] = 0;
    int i, j;

    for (i = 1; i <= length; i++) {
        int q = INT_MIN;
        for (j = 0; j < i; j++) {
            q = std::max(q, price[j] + arr[i - j - 1]);
            std::cout << q << " ";
        }
        arr[i] = q;
        std::cout << std::endl;
    }
    return arr[length];
}

void example() {
    int price[10] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int length;

    std::cin >> length;

    std::cout << cut_the_rod(price, length);
    getchar();
}
