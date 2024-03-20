//
// Created by ysh on 3/19/24.
//
#include <iostream>
#include <utility>
#include <vector>

struct MyData {
    MyData() { std::cout << "No arguments" << std::endl; };
    MyData(int, double, char) { std::cout << "With arguments" << std::endl; };
};

template <typename T, typename ... Args> T createT(Args&&... args) {
    return T(std::forward<Args>(args)...);
}
