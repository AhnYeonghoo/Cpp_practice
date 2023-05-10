#include <iostream>

int main() {

  int i;
  char c;
  double d;
  float f;

  int number_of_people; // 스네이크 표기법을 사용한다.
  double interest_rate;
  
  int arr[10];
  int *parr = arr;
  int *pi = &i;
  arr[0] = 10;
  std::cout << *parr << std::endl;
  i = 10;
  std::cout << *pi << std::endl;
  std::cout << pi << std::endl;
  std::cout << &pi << std::endl;
  std::cout << &i << std::endl;
  std::cout << parr << std::endl;
  std::cout << &arr << std::endl;

  for (int j = 0; j < 10; j++) {
    std::cout << j << std::endl;
  }

  int sum = 0;
  
  for (i = 1; i <= 10; i++) {
    sum += i;
  }
  std::cout << "합은: " << sum << std::endl;
  
  int sum2 = 0;
  i = 0;
  while (i <= 10) {
    sum2 += i;
    i++;
  }
  std::cout << sum2 << std::endl;

  int lucky_number = 3;
  std::cout << "내 비밀 수를 맞추어 보세요~" << std::endl;
  int user_input;
  
  while(1) {
    std::cout << "입력: ";
    std::cin >> user_input;
    if (lucky_number == user_input) {
      std::cout << "맞추셨습니다~~" << std::endl;
      break;
    } else {
      std::cout << "다시 생각해보세요~" << std::endl;
    }
  }

  
  
  return 0;
}