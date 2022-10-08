//
// Created by Zosia on 06.10.2022.
//

#ifndef SORTSEARCH_ALGORITHMS_STRUCTURE_HPP
#define SORTSEARCH_ALGORITHMS_STRUCTURE_HPP


#include <memory>


class SortBehaviour {
public:
    virtual void sort(int arr[]) = 0;
};

class BubbleSort : SortBehaviour {
public:
    void sort(int arr[]) override;
};

class SearchBehaviour {
public:
    virtual void search(int arr[]) = 0;
};


class Array {
public:
    Array() : arr_ {} {};
    ~Array() = default;

    int get_arr() const { return *arr_; }
    int get_size() const { return sizeof(*arr_) / sizeof(arr_[0]); }

    void sort() { sort_behaviour_->sort(arr_); }
    void search() { search_behaviour_->search(arr_); }

private:
    SortBehaviour *sort_behaviour_;
    SearchBehaviour *search_behaviour_;
    int arr_[];

};




#endif //SORTSEARCH_ALGORITHMS_STRUCTURE_HPP
