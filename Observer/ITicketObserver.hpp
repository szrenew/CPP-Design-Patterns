#ifndef _ITicketObserver
#define _ITicketObserver

class ITicketObserver {
 private:
  /* data */
 public:
  ITicketObserver(/* args */);
  virtual ~ITicketObserver();
  virtual void Update() = 0;
};

ITicketObserver::ITicketObserver(/* args */) {}

ITicketObserver::~ITicketObserver() {}

#endif