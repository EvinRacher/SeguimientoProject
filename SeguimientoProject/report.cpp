#include "report.h"
#include <iostream>

using namespace std;

Report::Report(){
  cout << "Construtor reporte" << endl;
}

Report::Report(Data dat){
  data = dat;
}

string Report::ask(){
  string res;// = health.ask();
  // De la siguiente forma llama primero a education.ask(): return health.ask()+education.ask()+feeding.ask()+sleep.ask()+hygiene.ask()+leisure.ask();
  //res += education.ask();
  res += feeding.ask();
  /**res += sleep.ask();
  res += hygiene.ask();
  res += leisure.ask();**/
  return res;
}
