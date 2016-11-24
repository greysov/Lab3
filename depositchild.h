#ifndef DEPOSITCHILD_H
#define DEPOSITCHILD_H
#include "depositclass.h"

#pragma once

class DepositChild: public DepositClass
{
  string bank;
  string city;

friend ostream& operator << (ostream& os, DepositChild d);

public:

  void set_bank(string b){bank = b;}
  void set_city(string s){city = s;}

  string get_bank(){return bank;}
  string get_city(){return city;}


  DepositChild():DepositClass()
  {
    bank = "%none%";
    city = "%RU%";
  };
  DepositChild(DepositChild& A): DepositClass(A)
  {};
  void cleanObj();

//Если в базовом классе функция объявлена как virtual, то
//эта функция может быть переопределена в производных классах.

//Класс, содержащий виртуальную функцию, называется полиморфным классом
};

#endif // DEPOSITCHILD_H
