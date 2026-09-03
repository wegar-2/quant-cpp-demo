#include <iostream>
#include <ostream>
#include <vector>

#include "./include/math_utils.hpp"
#include "./include/moving_average.hpp"


int main() {
    std::cout << "Inside multi-file program" << std::endl;
    int x = 12;
    std::cout << "My number is " << x << std::endl;
    std::cout << "Its square is " << square(x) << std::endl;

    std::vector<double> nums {1.5, 2.0, 2.5, 3, 3.5, 5, 6, 10, 14};

    MovingAverage ma(3);

    double ma_ = ma.compute(nums);

    std::cout << "Average is " << ma_ << std::endl;
}
