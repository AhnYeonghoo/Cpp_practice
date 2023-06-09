#include <string.h>
#include <iostream>

class PhotonCannon {
  int hp, shield;
  int coord_x, coord_y;
  int damage;
  char* name;
  
  public:
    PhotonCannon(int x, int y);
    PhotonCannon(int x, int y, const char* cannon_name);
    PhotonCannon(const PhotonCannon& pc);
    ~PhotonCannon();
    void ShowStatus();
};

PhotonCannon::PhotonCannon(int x, int y) {
  std::cout << "생성자 호출!" << std::endl;
  hp = shield = 100;
  coord_x = x;
  coord_y = y;
  damage = 20;

  name = NULL;
}

PhotonCannon::PhotonCannon(int x, int y, const char *cannon_name) {
  hp = shield = 100;
  coord_x = x;
  coord_y = y;
  damage = 20;

  name = new char[strlen(cannon_name) + 1];
  strcpy(name, cannon_name);
}

PhotonCannon::~PhotonCannon() {
  if (name) delete[] name;
}


PhotonCannon::PhotonCannon(const PhotonCannon& pc) {
  std::cout << "복사 생성자 호출!" << std::endl;
  hp = pc.hp;
  shield = pc.shield;
  coord_x = pc.coord_x;
  coord_y = pc.coord_y;
  damage = pc.damage;
}

void PhotonCannon::ShowStatus() {
  std::cout << "PhotonCannon " << std::endl;
  std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
          << std::endl;
          std::cout << " HP :  " << hp << std::endl;
}

int main() {
  PhotonCannon pc1(3, 3);
  PhotonCannon pc2(pc1);
  PhotonCannon pc3 = pc2;

  pc1.ShowStatus();
  pc2.ShowStatus();
  pc3.ShowStatus();
}