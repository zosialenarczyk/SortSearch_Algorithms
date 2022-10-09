//
// Created by Zosia on 09.10.2022.
//

#include "structure.hpp"

void QuickSort::sort(std::vector<int> &arr, int param1, int param2) {

    int lo = param1;
    int hi = param2;
    int p = 0; // what happens during recursion ?

    if (lo >= 0 && hi >= 0 && lo < hi){
        p = partition(arr, lo, hi);
        sort(arr, lo, p);
        sort(arr, p + 1, hi);
    }
}

std::size_t QuickSort::partition(std::vector<int> &arr, int param1, int param2) {

    int lo = param1;
    int hi = param2;


//    int pivot = arr[hi];
//    int pivotIndex = lo - 1;
//
//    for (std::size_t i = lo; i <= hi - 1; ++i){
//        if (arr[i] < pivot) {
//            arr[i], arr[pivotIndex] = arr[pivotIndex], arr[i];
//            pivotIndex++;
//        }
//        pivot, arr[pivotIndex + 1] = arr[pivotIndex + 1], pivot;
//    }
//
//    return pivotIndex + 1;

}