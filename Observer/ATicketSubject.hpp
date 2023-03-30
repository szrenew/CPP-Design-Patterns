#ifndef _ATicketSubject
#define _ATicketSubject

#include <list>

#include "ITicketObserver.hpp"

class ATicketSubject {
 private:
  std::list<ITicketObserver*> observers;

 public:
  std::string SubjectState;

  ATicketSubject();
  virtual ~ATicketSubject();

  void ResisterObserver(ITicketObserver* o) { observers.push_back(o); }
  void UnResisterObserver(ITicketObserver* o) { observers.remove(o); }
  void notifyObserver() {
    for (auto it : observers) {
      std::cout << "In ATicketSubject::notifyObserver..." << std::endl;
      it->Update();
    }
  }
};

ATicketSubject::ATicketSubject() {}

ATicketSubject::~ATicketSubject() {}

#endif