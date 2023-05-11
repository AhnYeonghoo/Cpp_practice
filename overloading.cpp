#include <iostream>

void Print(int x) {
  std::cout << "int x: " << x << std::endl;
}

void Print(double x) {
  std::cout << "double x: " << x << std::endl;
}

void Print(char x) {
  std::cout << "char x: " << x << std::endl;
}

int main() {
  int a = 1;
  char b = 'c';
  double c = 3.2f;
  
  Print(a);
  Print(b);
  Print(c);
  return 0;
}