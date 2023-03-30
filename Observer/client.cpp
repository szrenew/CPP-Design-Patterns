#include <iostream>

#include "DBRecorder.hpp"
#include "FlightOrder.hpp"
#include "SMSOperator.hpp"

int main() {
  FlightOrder* fo = new FlightOrder();

  DBRecorder* db = new DBRecorder("I'm DBRecorder", fo);
  SMSOperator* sms = new SMSOperator("I'm SMSOperator", fo);

  fo->ResisterObserver(db);
  fo->ResisterObserver(sms);

  fo->SubjectState = "订单已支付";
  fo->notifyObserver();

  fo->UnResisterObserver(db);
  fo->notifyObserver();

  return 0;
}