#include "depositclass.h"

DepositClass::DepositClass(DepositClass& A)
{
    name = A.name;
    dep_amount = A.dep_amount;
    rate = A.rate;
    date_in = A.date_in;
    period = A.period;
    type  = A.type;
}

void DepositClass::cleanObj()
{
  clog<<"VIRT PARENT";

  name = "";
  dep_amount = 0;
  rate = 0.0;
  date_in = "";
  period = "";
  type = "";
}

//ostream& operator << (ostream& os, DepositClass d)
//{
//  os <<d.get_name()<<"  "<<d.get_dep()<<"  "<<d.get_rate()<<"  "
//     <<d.get_date()<<"  "<<d.get_period()<<"  "<<d.get_type()<<'\n';
//  return os;
//}
