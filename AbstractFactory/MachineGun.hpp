#ifndef _MachineGun_hpp
#define _MachineGun_hpp

#include "Gun.hpp"
#include "MachineGunBullet.hpp"

class MachineGun : public Gun {
 private:
  /* data */
 public:
  MachineGun(/* args */);
  ~MachineGun();

  void AddBullet(Bullet* bullet);
  void fire();
};

MachineGun::MachineGun(/* args */) {
  std::cout << "In MachineGun::MachineGun..." << std::endl;
  for (int i = 0; i < 200; ++i)
    this->bullets.emplace_back(new MachineGunBullet());
}

MachineGun::~MachineGun() {}

void MachineGun::AddBullet(Bullet* bullet) {
  this->bullets.emplace_back(bullet);
}

void MachineGun::fire() {
  this->bullets.pop_back();
  std::cout << "射出一颗机枪子弹" << std::endl;
}

#endif