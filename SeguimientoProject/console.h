#pragma once
#include <set>
//#include "report.h"
#include <iostream>
#include "data.h"
#include "parameter.h"
#include <vector>
using namespace std;

class Console {
 public:
  Console();
  void writeReport();
 private:
  int readAInt();
  vector<Parameter> parameters;
  Parameter array[5];
  void* arr[5];
};


