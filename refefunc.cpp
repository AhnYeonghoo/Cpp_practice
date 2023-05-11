#include <iostream>

class A {
  int x;

  public:
    A(int c) : x(c) {}

    int& AccessX() { return x; }
    int GetX() { return x; }
    void ShowX() { std::cout << x << std::endl; }
  
};

int main() {
  A a(5);
  a.ShowX();
  
  int& c = a.AccessX();
  c = 4;
  a.ShowX();
  
  int d = a.AccessX();
  d = 3;
  a.ShowX();
}