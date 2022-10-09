//
// Created by Zosia on 08.10.2022.
//

#include "structure.hpp"

void BubbleSort::sort(std::vector<int> &arr) {
    /*
     * Iterates through an array and checks every two neighbouring elements. If an element with a higher
     * index is smaller then elements get swapped.
     * Goes until no swap is needed.
     */

    std::size_t n = arr.size();

    while (n > 1) {
        std::size_t new_n = 0;
        // n - 1 because length of the array does not equal the index of the last element
        for(std::size_t i = 1; i < n - 1; ++i){
            if( arr[i - 1] > arr[i]){
                arr[i - 1], arr[i] = arr[i], arr[i - 1];
                new_n = i; // new_n is the number of index of the swapped element
            }
        }
        n = new_n; // Here, new_n is the number of index of the last swapped element.
                    // It optimizes the algorithm, because the rest of the array, that is in order,
                    // will not be checked again.
    }
}

// bubblesort implementaion with raw arrays - decided to do it using std::vector instead
// beacuse of object-oriented structure

//void BubbleSort::sort(int arr[]) {
//
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    while (n > 1) {
//        int new_n = 0;
//        for (int i = 1; i < n - 1; ++i){
//            if (arr[i - 1] > arr[i]){
//                arr[i - 1], arr[i] = arr[i], arr[i - 1];
//                new_n = i;
//            }
//        }
//        n = new_n;
//    }
//}
