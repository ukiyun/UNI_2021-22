#include "MovingAverage.h"
#include <algorithm>

MovingAverage::MovingAverage(std::size_t n): n_(n) {}

void MovingAverage::update(double value) {
    if(values_.size() >= n_)
        values_.pop_front();
    values_.push_back(value);
}

double MovingAverage::get() const {
    double sum = 0;
    for(auto it = values_.begin(); it != values_.end(); ++it) {
        sum += *it;
    }
    return sum/values_.size();
}