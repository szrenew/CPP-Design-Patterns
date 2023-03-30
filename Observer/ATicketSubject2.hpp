#ifndef _ATicketSubject2
#define _ATicketSubject2

#include <iostream>
#include <list>
#include <string>

#include "ITicketObserver.hpp"

class ATicketSubject2 {
 private:
  std::list<void (*)()> observers;

 public:
  std::string SubjectState;

  ATicketSubject2();
  virtual ~ATicketSubject2();

  void ResisterObserver(void (*o)()) { observers.push_back(o); }
  void UnResisterObserver(void (*o)()) { observers.remove(o); }
  void notifyObserver() {
    for (auto it : observers) {
      std::cout << "In ATicketSubject::notifyObserver..." << std::endl;
      it();
    }
  }
};

ATicketSubject2::ATicketSubject2() {}

ATicketSubject2::~ATicketSubject2() {}

#endif