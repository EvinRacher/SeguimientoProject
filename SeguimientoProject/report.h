#pragma once
#include "data.h"
#include "parameter.h"

class Report {
 public:
  Report();
  string ask();
 private:
  Health health;
  Education education;
};
