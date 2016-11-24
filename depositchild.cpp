#include "depositchild.h"

void DepositChild::cleanObj()
{
  clog << "VIRT CHILD!!";

  bank = "";
  city = "";
}

ostream& operator << (ostream& os, DepositChild d)
{
  os <<d.get_bank()<<"  "<<d.get_city()<<"  "<<d.get_name()<<"  "<<d.get_dep()<<"  "<<d.get_rate()<<"  "
     <<d.get_date()<<"  "<<d.get_period()<<"  "<<d.get_type()<<'\n';
  return os;
}
