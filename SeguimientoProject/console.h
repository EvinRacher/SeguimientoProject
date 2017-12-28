#pragma once
#include <set>
//#include "report.h"
#include <iostream>
#include "data.h"

using namespace std;


class Console {
 public:
  Console();
  void writeReport();
 private:
  int readAInt();
};
