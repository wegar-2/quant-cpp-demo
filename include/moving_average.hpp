#pragma once

#include <vector>

class MovingAverage {
public:
    // note: use of the explicit keyword to avoid implicit conversion 
    explicit MovingAverage(std::size_t window);
    double compute(const std::vector<double>& values) const;

private:
    std::size_t window_;

};