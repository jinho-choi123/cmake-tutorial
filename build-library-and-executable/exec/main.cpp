#include <iostream>

#include "custom_math.hpp"

int main() {
  custom_math::operations operations;
  std::cout << "Sum: " << operations.sum(1, 2) << std::endl;
  std::cout << "Subtract: " << operations.subtract(1, 2) << std::endl;
  std::cout << "Multiply: " << operations.multiply(1, 2) << std::endl;
  std::cout << "Divide: " << operations.divide(1, 2) << std::endl;
  return 0;
}
