#ifndef _MachineGunBullet_hpp
#define _MachineGunBullet_hpp

#include "Bullet.hpp"

class MachineGunBullet : public Bullet {
 private:
  /* data */
 public:
  MachineGunBullet(/* args */);
  ~MachineGunBullet();

  void show();
};

MachineGunBullet::MachineGunBullet(/* args */) { length = 12.7; }

MachineGunBullet::~MachineGunBullet() {}

void MachineGunBullet::show() {
  std::cout << "机枪子弹长度：" << length << std::endl;
}

#endif