#pragma once
#include "date.h"
#include <string>

class Data {
 public:
  Data();
 private:
  int semester;
  int engLvl;
  string subs[];//Subjects: materias
  date date;
}
