#include <iostream>
#include <string.h>

class Marine {
  int hp;
  int coord_x, coord_y;
  int damage;
  bool is_dead;
  char* name;

  public:
    Marine();
    Marine(int x, int y, const char* marine_name);
    Marine(int x, int y);
    ~Marine();
    
    int Attack();
    void BeAttack(int damage_earn);
    void Move(int x, int y);
    void ShowStatus();
};

Marine::Marine() {
  hp = 50;
  coord_x = coord_y = 0;
  damage = 5;
  is_dead = false;
}

Marine::Marine(int x, int y, const char* marine_name) {
  name = new char[strlen(marine_name) + 1];
  strcpy(name, marine_name);
  
  coord_x = x;
  coord_y = y;
  hp = 50;
  damage = 5;
  is_dead = false;
}

Marine::Marine(int x, int y) {
  coord_x = x;
  coord_y = y;
  hp = 50;
  damage = 5;
  is_dead = false;
  name = NULL;
}

void Marine::Move(int x, int y) {
  coord_x = x;
  coord_y = y;
}

int Marine::Attack() {
  return damage;
}

void Marine::BeAttack(int damage_earn) {
  hp -= damage_earn;
  if (hp <= 0) is_dead = true;
}

void Marine::ShowStatus() {
  std::cout << " *** Marine *** " << name <<  std::endl;
  std::cout << " Location: ( " << coord_x << " , " << coord_y << " ) " << std::endl;
  std::cout << " HP : " << hp << std::endl;
}

Marine::~Marine() {
  std::cout << name << " 의 소멸자 호출 !"  << std::endl;
  if (name!=NULL) {
    delete[] name;
  }
}

int main() {
  Marine marine1(2, 3);
  Marine marine2(3, 5);
  
  
  marine1.ShowStatus();
  marine2.ShowStatus();
  
  std::cout << std::endl << "마린 1이 마린 2를 공격! " << std::endl;
  marine2.BeAttack(marine1.Attack());
  marine1.ShowStatus();
  marine2.ShowStatus();

  Marine* marines[100];
  
  marines[0] = new Marine(2, 3, "Marine2");
  marines[1] = new Marine(3, 5, "Marine1");
  
  marines[0]->ShowStatus();
  marines[1]->ShowStatus();
  
  marines[0]->BeAttack(marines[1]->Attack());
  
  marines[0]->ShowStatus();
  marines[1]->ShowStatus();

  delete marines[0];
  delete marines[1];
}