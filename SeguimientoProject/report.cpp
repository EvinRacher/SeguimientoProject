#include "report.h"
#include "parameter.h"
#include "date.h"
#include <iostream>
//#include "data.h"

using namespace std;

Report::Report(){
  cout << "Construtor reporte" << endl;
}

int redondear(float f){
  int p1 = f;
  float p2 = p1 + 0.5;
  if(f > p2){
    return p1+1;
  }else if (f < p2){
    return p1;
  }else{
    if(p1%2 == 0){
      return p1;
    }else{
      return p1+1;
    }
  }
}

Report::Report(Data dat){
  data = dat;
  cout << "Construyendo horario. -1 para parar" << endl;
  setHr('l');
  setHr('a');
  cout << data.getHr('l') << endl;
  cout << data.getHr('a') << endl;
  Health salud(data);
  Education educa(data);
  Feeding alime(data);
  Sleep sueno(data);
  Hygiene higie(data);
  Leisure recre(data);
  health = salud;
  education = educa;
  feeding = alime;
  sleep = sueno;
  hygiene = higie;
  leisure = recre;
  
}

void Report::setHr(char l){
  int i = 0;
  int suma = 0;
  string msg;
  int hr;
  float prom;
  if(l == 'l'){
    msg = "levantarse";
  }else if (l == 'a'){
    msg = "acostarse";
  }
    cout << "Ingrese hora de "+msg+":" << endl;
    cin >> hr;
    while(hr != -1){
    i++;
    suma+=hr;
    cout << "Ingrese hora de "+msg+":" << endl;
    cin >> hr;
    }
    prom = suma*1.0/i*1.0;
    data.setHr(redondear(prom), l);
}

string Report::consDate(){
  Date* date = data.getDate();
  return date->getMonthS()+" "+convertToString(date->getDay())+" del "+convertToString(date->getYear());
}

string Report::ask(){
  string res = "Fecha: "+consDate()+".\n\n";
  res +=  health.ask();
  // De la siguiente forma llama primero a education.ask(): return health.ask()+education.ask()+feeding.ask()+sleep.ask()+hygiene.ask()+leisure.ask();
  res += education.ask();
  res += feeding.ask();
  res += sleep.ask();
  res += hygiene.ask();
  res += leisure.ask();
  return res;
}
