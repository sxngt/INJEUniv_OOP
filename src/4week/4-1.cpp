//
// Created by ysh on 3/26/24.
//
#include "iostream"
#include "functional"

void foo() {
    std::cout << "Invoked" << std::endl;
}

int main() {
    typedef void callabeUnit();
    std::reference_wrapper<callabeUnit> refWrap(foo);
    refWrap();
    return 0;
}

