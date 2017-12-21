#pragma once
#include <string>
#include <utility>

using namespace std;

enum Month {
  Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre
  };

class Date {
 public:
  Date(int day, Month month, int year);
  int getDay();
  int getMonth();
  int getYear();

private:
  int day,year;
  Month month;
};
