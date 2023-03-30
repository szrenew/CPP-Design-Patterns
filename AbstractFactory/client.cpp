#include <iostream>

#include "Factory1.hpp"
#include "Factory2.hpp"

int main() {
  IFactory* factory;
  Bullet* bullet;
  Gun* gun;

  factory = new Factory1();
  bullet = factory->createBullet();
  gun = factory->createGun();
  gun->fire();

  factory = new Factory2();
  bullet = factory->createBullet();
  gun = factory->createGun();
  gun->fire();
  return 0;
}