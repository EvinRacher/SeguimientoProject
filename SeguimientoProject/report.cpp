#include "report.h"
#include "parameter.h"
#include "date.h"
#include <iostream>

using namespace std;

Report::Report(){
  cout << "Construtor reporte" << endl;
}

Report::Report(Data dat){
  data = dat;
  Health salud(dat);
  Education educa(dat);
  Feeding alime(dat);
  Sleep sueno(dat);
  Hygiene higie(dat);
  Leisure recre(dat);
  health = salud;
  education = educa;
  feeding = alime;
  sleep = sueno;
  hygiene = higie;
  leisure = recre;
}
string Report::consDate(){
  Date* date = data.getDate();
  return date->getMonthS()+" "+convertToString(date->getDay())+" del "+convertToString(date->getYear());
}

string Report::ask(){
  string res = consDate()+".\n\n"+ health.ask();
	       // De la siguiente forma llama primero a education.ask(): return health.ask()+education.ask()+feeding.ask()+sleep.ask()+hygiene.ask()+leisure.ask();
	       /**res += education.ask();/**
  res += feeding.ask();
  res += sleep.ask();
  res += hygiene.ask();
  res += leisure.ask();**/
  return res;
}
