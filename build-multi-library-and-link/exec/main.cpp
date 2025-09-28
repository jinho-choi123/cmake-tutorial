#include <iostream>
#include "custom_bar.hpp"
#include "custom_foo.hpp"
#include "custom_math.hpp"

using namespace std;
int main() {
  custom_foo::operations foo;
  custom_bar::operations bar;
  custom_math::operations math;
  cout << "Hello, World!" << endl;
  cout << "Foo: " << foo.hello(1, 2) << endl;
  cout << "Bar: " << bar.mango(1, 2) << endl;
  cout << "Math: " << math.sum(1, 2) << endl;
  return 0;
}