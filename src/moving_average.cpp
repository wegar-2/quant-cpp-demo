

#include "../include/moving_average.hpp"

#include <cstddef>
#include <stdexcept>
#include <vector>


MovingAverage::MovingAverage(std::size_t window) : window_(window) {
    if (window == 0) {
        throw std::invalid_argument("Window cannot be of length zero!");
    }
}

double MovingAverage::compute(const std::vector<double>& values) const {

    if (values.size() < window_) {
        throw std::invalid_argument("Not enough observations");
    }

    double s = 0;

    for (std::size_t i = values.size() - window_; i < values.size(); ++i) {
        s += values[i];
    }


    return s / static_cast<double>(values.size());
}
