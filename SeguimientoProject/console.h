#pragma once
#include <set>
#include "reporte.h"
#include <iostream>

using namespace std;


class Console {
 public:
  Console();
 private:
  void writeConsole();
  Report reporte;
}
