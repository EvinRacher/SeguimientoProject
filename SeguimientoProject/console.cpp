#include "console.h"
#include <iostream>
#include <cstdlib>
#include "data.h"
#include "date.h"
#include "parameter.h"
#include <vector>
#include "report.h"
using namespace std;

Console::Console(){
}
int Console::readAInt(){
  string line;
  cin >> line;
  return atoi(line.c_str());
}
void Console::writeReport(){
  char r;
  Date date;
  Date* apun = &date;
  cout << "Ingrese la fecha: " << endl;
  cout << "Día: ";
  date.setDay(readAInt());
  cout << "Mes: ";
  date.setMonth(readAInt());
  cout << "Año: ";
  date.setYear(readAInt());
  Data data;
  Data* dat = &data;
  cout << "Esta en vacaciones?" << endl;
  cin >> r;
  if (r == 's'){
    data.setHolidays(true);
  }else{
  cout << "Ingrese el semestre actual: ";
  data.setSemester(readAInt());
  cout << "Ingrese el nivel de inglés actual: ";
  data.setEngLvl(readAInt());
  }
  data.setDate(apun);
  
  Report report(data);
  
  cout << report.ask();
}
