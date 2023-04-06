// Given an array of integers, return a new array with each value doubled.

// For example:

// [1, 2, 3] --> [2, 4, 6]

#include <vector>

std::vector<int> maps(const std::vector<int> & values) {
    std::vector<int> doubled;
    for (auto i=0; i < (int) values.size(); i++) {
        //std::cout << "VALUES " << values[i] << "\n";
        doubled.push_back(values[i] * 2);
        //std::cout << "doubled " << doubled[i] << "\n";
    }
    return doubled;
}
