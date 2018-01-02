#pragma once
#include <set>
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
};


