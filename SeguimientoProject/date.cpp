#include "date.h"
Date::Date(){}

Date::Date(int day, int month, int year):
  day(day),
  month(month),
  year(year)
{
  setMonth();
}

int Date::getDay(){
  return day;
}

void Date::setDay(int day){
  day = day;
}

int Date::getYear(){
  return year;
}

void Date::setYear(int year){
  year = year ;
}

int Date::getMonth(){
  return month;
}

void Date::setMonth(int month){
  setMonth();
  month = month;
}

string Date::getMonthS(){
  return monthS;
}

void Date::setMonth(){
  switch(month){
  case 1:
    monthS = "Enero";
    break;
  case 2:
    monthS = "Febrero";
    break;
  case 3:
    monthS = "Marzo";
    break;
  case 4:
    monthS = "Abril";
    break;
  case 5:
    monthS = "Mayo";
    break;
  case 6:
    monthS = "Junio";
    break;
  case 7:
    monthS = "Julio";
    break;
  case 8:
    monthS = "Agosto";
    break;
  case 9:
    monthS = "Septiembre";
    break;
  case 10:
    monthS = "Octubre";
    break;
  case 11:
    monthS = "Noviembre";
    break;
  case 12:
    monthS = "Diciembre";
    break;
  }
}
