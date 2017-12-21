#include "date.h"

Date::Date(int day, Month month, int year):
  day(day),
  month(month),
  year(year)
{}

int Date::getDay(){
  return day;
}

int Date::getYear(){
  return year;
}

int Date::getMonth(){
  return month;
}
