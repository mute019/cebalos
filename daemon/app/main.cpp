#include <iostream>
#include <add.hpp>
#include <multi.hpp>
#include <division.hpp>

int main() {

    std::cout << "Hello Cmake: Check add(): " << add(10, 2) << "\n";
    std::cout << "Hello Cmake: Check multi(): " << multi(2, 3) << "\n";
    std::cout << "Hello Cmake: Check div(): " << division(2, 3) << "\n";
    return 0;
}