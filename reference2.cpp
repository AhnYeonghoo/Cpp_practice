#include <iostream>

int main() {
  int x;
  int& y = x;
  int& z = y;
  
  x = 1;
  std::cout << x << y << z << std::endl;
  y = 2;
  std::cout << x << y << z << std::endl;
  z = 3;
  std::cout << x << y << z << std::endl;

  const int& ref = 4;
  int a = ref;
  
  std::cout << a << std::endl;
}