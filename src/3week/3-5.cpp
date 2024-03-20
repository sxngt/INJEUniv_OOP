//
// Created by ysh on 3/19/24.
//
#include <iostream>
#include <utility>

int main()
{
    int a = 6;
    int b = 7;
    std::cout << "before swap : a=" << a << ", b =" << b << std::endl;
    std::swap(a, b);
    std::cout << "after swap : a=" << a << ", b=" << b << std::endl;

    return 0;
}
