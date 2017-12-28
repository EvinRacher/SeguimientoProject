#pragma once
#include <string>

using namespace std;

class Date {
 public:
  Date();
  Date(int day, int month, int year);
  int getDay();
  int getMonth();
  int getYear();
  string getMonthS();
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);
  
private:
  int day,year,month;
  string monthS;
  void setMonth();
};
