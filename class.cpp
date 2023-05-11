#include <iostream>

using namespace std;

class Animal {
  private:
    int food;
    int weight;
    
  public:
    void SetAnimal(int food, int weight) {
      this->food = food;
      this->weight = weight;
    }

    void IncreaseFood(int inc) {
      food += inc;
      weight += (inc / 3);
    }

    void ViewStat() {
      cout << "이 동물의 food : " << food << endl;
      cout << "이 동물의 weight : " << weight << endl;
    }
};

int main() {

  Animal animal;
  animal.SetAnimal(100, 50);
  animal.IncreaseFood(30);

  animal.ViewStat();
  return 0;
  
}