#include "data.h"
#include "date.h"
#include <iostream>
using namespace std;

Data::Data(){
}

int Data::getSemester(){
  return semester;
}

void Data::setSemester(int sem){
  semester = sem;
}

int Data::getEngLvl(){
  return engLvl;
}

void Data::setEngLvl(int lvl){
  engLvl = lvl;
}

Date* Data::getDate(){
  return date;
}

void Data::setDate(Date* date){
  date = date;
}

bool Data::getHolidays(){
  return holidays;
}

void Data::setHolidays(bool holi){
  holidays = holi;
}
