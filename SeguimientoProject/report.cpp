#include "report.h"
#include <iostream>

using namespace std;

Report::Report(){
  cout << "Construtor reporte" << endl;
}

void Report::ask(){
  health.ask();
}
