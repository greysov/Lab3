#ifndef DEPOSITCLASS_H
#define DEPOSITCLASS_H
#include <iostream>
#pragma once

using namespace std;

class DepositClass
{
protected:
    string name;
    int dep_amount;
    double rate;
    string date_in;
    string period;
    string type;


//    friend ostream& operator << (ostream& os, DepositClass d);

public:
    bool operator< (const DepositClass& rval) {
      if (this->dep_amount < rval.dep_amount)
        return true;
      return false;
    }

    bool operator> (const DepositClass& rval) {
      if (this->dep_amount >= rval.dep_amount)
        return true;
      return false;
    }
public:
    //MARK: - set()
    void set_name(string _name) {name = _name;}
    void set_dep(int _dep) {dep_amount = _dep;}
    void set_rate(double _rate) {rate = _rate;}
    void set_date(string _din) {date_in = _din;}
    void set_period(string _period) {period = _period;}
    void set_type(string _type) {type = _type;}

    //MARK: - get()
    string get_name() {return name;}
    int get_dep() {return dep_amount;}
    double get_rate() {return rate;}
    string get_date() {return date_in;}
    string get_period() {return period;}
    string get_type() {return type;}

    virtual void cleanObj();


public:
  DepositClass(DepositClass& A);
  DepositClass(): name("%name%"), dep_amount(0), rate(100), date_in("%999%"),
  period("%none%"), type("%none%")
  {};
};

#endif // DEPOSITCLASS_H














