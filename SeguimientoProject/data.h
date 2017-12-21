#pragma once
#include "date.h"
#include <string>

using namespace std;

class Data {
 public:
  Data(int semester, int engLvl, string* subs);
  int getSemester();
  int getEngLvl();
  string* getSubs();
  Date getDate();
  
 private:
  int semester;
  int engLvl;
  string* subs;//Subjects: materias
  Date* date;
};
