#ifndef _HandgunBullet_hpp
#define _HandgunBullet_hpp

#include "Bullet.hpp"

class HandgunBullet : public Bullet {
 private:
 public:
  HandgunBullet();
  ~HandgunBullet();

  void show();
};

HandgunBullet::HandgunBullet() {
  // std::cout << "In HandgunBullet::HandgunBullet" << std::endl;
  length = 9.0;
}

HandgunBullet::~HandgunBullet() {}

void HandgunBullet::show() {
  std::cout << "手枪子弹长度：" << length << std::endl;
}

#endif