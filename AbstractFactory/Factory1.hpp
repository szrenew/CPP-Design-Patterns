#include "Handgun.hpp"
#include "HandgunBullet.hpp"
#include "IFactory.hpp"

class Factory1 : public IFactory {
 private:
 public:
  Factory1(/* args */);
  ~Factory1();

  Handgun* createGun() { return new Handgun(); }
  HandgunBullet* createBullet() { return new HandgunBullet(); }
};

Factory1::Factory1() { std::cout << "In Factory1::Factory..." << std::endl; }

Factory1::~Factory1() {}
