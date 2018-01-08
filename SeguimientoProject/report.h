#pragma once
#include "data.h"
#include "parameter.h"

class Report {
 public:
  Report();
  Report(Data dat);
  string ask();
 private:
  Health health;
  Education education;
  Feeding feeding;
  Sleep sleep;
  Hygiene hygiene;
  Leisure leisure;
  Data data;
  string consDate();
};
