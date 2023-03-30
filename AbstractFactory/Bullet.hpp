#ifndef _Bullet_hpp
#define _Bullet_hpp

#include <iostream>

class Bullet {
 public:
  double length;

  Bullet();
  virtual ~Bullet();

  void show();
};

Bullet::Bullet() {}

Bullet::~Bullet() {}

#endif