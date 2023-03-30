#ifndef _IFactory_hpp
#define _IFactory_hpp

#include "Bullet.hpp"
#include "Gun.hpp"

class IFactory {
 private:
  /* data */
 public:
  IFactory(/* args */);
  virtual ~IFactory();

  virtual Gun* createGun() { return new Gun(); };
  virtual Bullet* createBullet() { return new Bullet(); };
};

IFactory::IFactory(/* args */) {}

IFactory::~IFactory() {}

#endif