#include <iostream>
#include <string>

#include "ATicketSubject.hpp"
#include "ITicketObserver.hpp"

class DBRecorder : public ITicketObserver {
 private:
  std::string observerState;
  ATicketSubject* subject;

 public:
  DBRecorder(std::string msg, ATicketSubject* subject);
  ~DBRecorder();

  void updateData() {}

  void Update() {
    std::cout << "In DBRecorder::Update..." << std::endl;
    this->observerState = subject->SubjectState;
    if (observerState == "订单已支付") {
      updateData();
    }
  }
};

DBRecorder::DBRecorder(std::string msg, ATicketSubject* subject) {
  std::cout << msg << std::endl;
  this->subject = subject;
}

DBRecorder::~DBRecorder() {}
