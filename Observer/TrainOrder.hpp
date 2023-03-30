#include <list>

#include "ITicketObserver.hpp"

class TrainOrder : public ITicketObserver {
 private:
  std::list<void (*)()> observers;

 public:
  TrainOrder(/* args */);
  ~TrainOrder();
};

TrainOrder::TrainOrder(/* args */) {}

TrainOrder::~TrainOrder() {}
