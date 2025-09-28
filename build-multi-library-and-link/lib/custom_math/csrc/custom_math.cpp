#include <exception>
#include <iostream>
#include <stdexcept>

#include "custom_math.hpp"

int custom_math::operations::sum(int a, int b) { return a + b; }

int custom_math::operations::subtract(int a, int b) { return a - b; }

int custom_math::operations::multiply(int a, int b) { return a * b; }

int custom_math::operations::divide(int a, int b) { return a / b; }