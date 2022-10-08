//
// Created by Zosia on 08.10.2022.
//

#include "structure.hpp"

void BubbleSort::sort(int arr[]) {

    int n = sizeof(arr) / sizeof(arr[0]);

    while (n > 1) {
        int new_n = 0;
        for (int i = 1; i < n - 1; ++i){
            if (arr[i - 1] > arr[i]){
                arr[i - 1], arr[i] = arr[i], arr[i - 1];
                new_n = i;
            }
        }
        n = new_n;
    }
}
