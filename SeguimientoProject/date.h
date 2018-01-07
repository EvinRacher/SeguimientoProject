#pragma once
#include <string>

using namespace std;

class Date {
 public:
  Date();
  Date(int d, int m, int y);
  int getDay();
  int getMonth();
  int getYear();
  string getMonthS();
  void setDay(int d);
  void setMonth(int m);
  void setYear(int y);
  
private:
  int day,year,month;
  string monthS;
  void setMonth();
};
