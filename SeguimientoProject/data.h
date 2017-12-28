#pragma once
#include "date.h"
#include <string>

using namespace std;

class Data {
 public:
  Data();
  int getSemester();
  int getEngLvl();
  string getSub(int i);
  Date* getDate();

  void setSemester(int sem);
  void setEngLvl(int lvl);
  void setDate(Date* date);
 private:
  int semester;
  int engLvl;
  string subs[];//Subjects: materias
  Date* date;
};
