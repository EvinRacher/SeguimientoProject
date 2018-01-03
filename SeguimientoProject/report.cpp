#include "report.h"
#include <iostream>

using namespace std;

Report::Report(){
  cout << "Construtor reporte" << endl;
}

string Report::ask(){
  string answer = health.ask();
  answer += education.ask();
  return answer;
}
