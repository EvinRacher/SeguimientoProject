#include "data.h"
#include "date.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Data::Data(){
}

int Data::getSemester(){
  return semester;
}

void Data::setSemester(int sem){
  semester = sem;
}

string Data::getEngLvl(){
  return engLvl;
}

void Data::setEngLvl(string lvl){
  engLvl = lvl;
}

Date* Data::getDate(){
  return date;
}

void Data::setDate(Date* dat){
  date = dat;
}

bool Data::getHolidays(){
  return holidays;
}

void Data::setHolidays(bool holi){
  holidays = holi;
}

int Data::getHr(char hr){
  if (hr == 'l'){
    return hLev;
  }else if(hr == 'a'){
    return hAco;
  }
}

void Data::setHr(int hr, char h){
  if (h == 'l'){
    hLev = hr;
  }else if(h == 'a'){
    hAco = hr;
  }
}

string convertToString(int i){
  stringstream ss;
  ss << i;
  string str;
  ss >> str;
  return str;
}
