#pragma once
#include "date.h"
#include <string>
#include <sstream>

using namespace std;

class Data {
 public:
  Data();
  int getSemester();
  string getEngLvl();
  string getSub(int i);
  Date* getDate();
  bool getHolidays();
  int getHr(char hr);
  
  void setSemester(int sem);
  void setEngLvl(string lvl);
  void setDate(Date* dat);
  void setHolidays(bool holi);
  void setHr(int hr, char h);
  
 private:
  int semester;
  string engLvl;
  string subs[];//Subjects: materias
  Date* date;
  bool holidays;
  int hLev;
  int hAco;
};

string convertToString(int i);
