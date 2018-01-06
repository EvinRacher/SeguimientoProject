#pragma once
#include "data.h"
#include "parameter.h"

class Report {
 public:
  Report();
  Report(Data dat);
  string ask();
 private:
  Health health(data);
  Education education(data);
  Feeding feeding(data);
  Sleep sleep(data);
  Hygiene hygiene(data);
  Leisure leisure(data);
  Data data;
};
