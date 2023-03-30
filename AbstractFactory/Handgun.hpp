#ifndef _Handgun_hpp
#define _Handgun_hpp

#include <algorithm>
#include <iostream>

#include "Bullet.hpp"
#include "Gun.hpp"
#include "HandgunBullet.hpp"

class Handgun : public Gun {
 private:
  // std::vector<HandgunBullet*> bullets;

 public:
  Handgun(/* args */);
  ~Handgun();

  void AddBullet(Bullet* bullet) { this->bullets.emplace_back(bullet); }
  void fire();
};

Handgun::Handgun() {
  std::cout << "In Handgun::Handgun..." << std::endl;
  for (int i = 0; i < 20; ++i) this->bullets.emplace_back(new HandgunBullet());
}

Handgun::~Handgun() {}

void Handgun::fire() {
  bullets.pop_back();
  std::cout << "射出一发手枪子弹: " << std::endl;
}

#endif