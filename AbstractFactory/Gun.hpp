#ifndef _Gun_hpp
#define _Gun_hpp

#include <iostream>
#include <memory>
#include <vector>

#include "Bullet.hpp"

class Gun {
 public:
  Gun();
  virtual ~Gun();

  virtual void AddBullet(Bullet* bullet){};
  virtual void fire() { std::cout << "In Gun::fire.." << std::endl; };

 protected:
  std::vector<Bullet*> bullets;
};

Gun::Gun() { std::cout << "In Gun::Gun..." << std::endl; }

Gun::~Gun() {}

#endif