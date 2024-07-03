#ifndef RAY_TRACER_HPP
#define RAY_TRACER_HPP

#include <cmath>
#include <limits>
#include <memory>
#include <numbers>
#include <random>


// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = std::numbers::pi;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double() {
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max).
    return min + (max-min)*random_double();
}

// Common Headers

#include "interval.hpp"
#include "ray.hpp"
#include "vec3.hpp"

#endif