#pragma once
#include <string>

using namespace std;

class Date {
 public:
  Date(int day, int month, int year);
  int getDay();
  int getMonth();
  int getYear();
  string getMonthS();

private:
  int day,year,month;
  string monthS;
  void setMonth(int month);
};
