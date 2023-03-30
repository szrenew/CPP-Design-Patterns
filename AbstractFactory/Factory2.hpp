#include "IFactory.hpp"
#include "MachineGun.hpp"
#include "MachineGunBullet.hpp"

class Factory2 : public IFactory {
 private:
 public:
  Factory2(/* args */);
  ~Factory2();

  MachineGun* createGun() { return new MachineGun(); }
  MachineGunBullet* createBullet() { return new MachineGunBullet(); }
};

Factory2::Factory2(/* args */) {}

Factory2::~Factory2() {}
