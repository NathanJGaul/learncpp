#include <iostream>

int main()
{
  std::cout << 5 << '\n'; // print the value of a literal

  int x{5};
  std::cout << x << '\n'; // print the value of a variable

  std::cout << 1 + 2 << '\n'; // using operators
  return 0;
}