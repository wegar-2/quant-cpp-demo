#include <iostream>
#include "math_utils.hpp"


int main() {
    std::cout << "Inside multi-file program" << std::endl;
    int x = 12;
    std::cout << "My number is " << x << std::endl;
    std::cout << "Its square is " << square(x) << std::endl;
}
