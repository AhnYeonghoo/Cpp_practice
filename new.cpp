#include <iostream>

using namespace std;

int main() {
  int* p = new int;
  *p = 10;
  cout << *p << endl;
  delete p;

  int arr_size = 10;
  cout << "array size : 10";
  int* list = new int[arr_size];
  for (int i = 0; i < arr_size; i++) {
    list[i] = i + 1;
  }
  for (int i = 0; i < arr_size; i++) {
    cout << i << "th element of list : " << list[i] << endl;
  }

  delete[] list;

  int a = 4;
  {
    int a = 4;
    std::cout <<  "안에서 a: " << a ;
  }
  cout << "밖에서 a:" << a;
  return 0;
}