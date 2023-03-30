#include <string>

#include "ATicketSubject.hpp"

class FlightOrder : public ATicketSubject {
 private:
  std::string orderState;

 public:
  FlightOrder(/* args */);
  ~FlightOrder();
};

FlightOrder::FlightOrder(/* args */) {}

FlightOrder::~FlightOrder() {}
