#include "console.h"
#include <iostream>
#include <cstdlib>
#include "data.h"
#include "date.h"
#include "parameter.h"
#include <vector>

using namespace std;

Console::Console(){
  Health health;
  Education education;
  parameters.push_back(health);
  array[0] = health;
  arr[0] = new Health();
  parameters.push_back(education);
  array[1] = education;
  arr[1] = new Education();
  /**parameters.push_back(Feeding feeding);
  parameters.push_back(Sleep sleep);
  parameters.push_back(Hygiene hygiene);
  parameters.push_back(Leisure leisure);**/
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
  for(int i = 0; i < parameters.size(); i++){
    cout <<  parameters[i].ask() << endl;
    cout << array[i].ask() << endl;
    cout << arr[i].ask() << endl;
  }
}
