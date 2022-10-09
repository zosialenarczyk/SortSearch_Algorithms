//
// Created by Zosia on 06.10.2022.
//

#ifndef SORTSEARCH_ALGORITHMS_STRUCTURE_HPP
#define SORTSEARCH_ALGORITHMS_STRUCTURE_HPP


#include <memory>
#include <vector>


class SortBehaviour {
public:
    virtual void sort(std::vector<int> &arr, int param1, int param2) = 0;
};

class BubbleSort : SortBehaviour {
public:
    void sort(std::vector<int> &arr, int param1, int param2) override;
};

class QuickSort : SortBehaviour {
public:
    void sort(std::vector<int> &arr, int param1, int param2) override;
    std::size_t partition(std::vector<int> &arr, int param1, int param2);
};

class SearchBehaviour {
public:
    virtual void search(std::vector<int> &arr) = 0;
};


class Array {
public:
    Array() : arr_ {} {};
    ~Array() = default;

    // type of returned value must be const because in a const method every member becomes const,
    // so it cannot be modified
    const std::vector<int>& get_arr() const { return arr_; }
    std::size_t get_size() const { return arr_.size(); }

    void sort() { sort_behaviour_->sort(arr_, 0, 0); }
    void search() { search_behaviour_->search(arr_); }

private:
    SortBehaviour *sort_behaviour_;
    SearchBehaviour *search_behaviour_;
    std::vector<int> arr_;

};




#endif //SORTSEARCH_ALGORITHMS_STRUCTURE_HPP
