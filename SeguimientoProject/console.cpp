#include "console.h"
#include <iostream>
#include <cstdlib>
#include "data.h"
#include "date.h"
#include "parameter.h"

using namespace std;

Console::Console(){

}
int Console::readAInt(){
  string line;
  cin >> line;
  return atoi(line.c_str());
}
void Console::writeReport(){
  /**  Date date;
  Date* apun = &date;
  cout << "Ingrese la fecha: " << endl;
  cout << "Día: ";
  date.setDay(readAInt());
  cout << "Mes: ";
  date.setMonth(readAInt());
  cout << "Año: ";
  date.setYear(readAInt());
  Data data;
  cout << "Ingrese el semestre actual: ";
  data.setSemester(readAInt());
  cout << "Ingrese el nivel de inglés actual: ";
  data.setEngLvl(readAInt());
  data.setDate(apun);
  **/
  Health health;
  cout << "good"<< endl;
  for(int i = 0; i < health.Parameter::getQSize(); i++){
    health.ask(i);
  }
}
