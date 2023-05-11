#include <iostream>

class Marine {
  
  static int total_marine_num;
  
  int hp;
  int coord_x, coord_y;
  int damage;
  bool is_dead;

  public:
    Marine();
    Marine(int x, int y);
    
    int Attack();
    void BeAttack(int damage);
    void Move(int x, int y);

    void ShowStatus();

    ~Marine() { total_marine_num--; }
};

int Marine::total_marine_num = 0;

Marine::Marine() : hp(50), coord_x(0), coord_y(0), damage(5), is_dead(false) {
  total_marine_num++;
}

Marine::Marine(int x, int y) 
    : coord_x(x), coord_y(y), hp(50), damage(5), is_dead(false) {
      total_marine_num++;
    }
  
void Marine::Move(int x, int y) {
  coord_x = x;
  coord_y = y;
}

int Marine::Attack() { return damage; }

void Marine::BeAttack(int damage) {
  hp -= damage;
  if (hp <= 0) is_dead = true;
}

void Marine::ShowStatus() {
  std::cout << " *** MArine *** " << std::endl;
  std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
  <<std::endl;
  std::cout << " HP : " << hp << std::endl;
  std::cout << "현재 총 마린 수: " << total_marine_num << std::endl;
}

void CreateMarine() {
  Marine marine3(10, 10);
  marine3.ShowStatus();
}