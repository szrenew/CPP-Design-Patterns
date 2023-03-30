#include <iostream>
#include <string>

#include "ATicketSubject.hpp"
#include "ITicketObserver.hpp"

class SMSOperator : public ITicketObserver {
 private:
  std::string observerState;
  ATicketSubject* subject;

 public:
  SMSOperator(std::string msg, ATicketSubject* subject);
  ~SMSOperator();

  void sendMessage() {}

  void Update() {
    std::cout << "In SMSOperator::Update..." << std::endl;
    observerState = subject->SubjectState;
    if (observerState == "订单已支付") {
      sendMessage();
    }
  }
};

SMSOperator::SMSOperator(std::string msg, ATicketSubject* subject) {
  std::cout << msg << std::endl;
  this->subject = subject;
}

SMSOperator::~SMSOperator() {}
