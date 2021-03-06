#include <sstream>
#include <iostream>
#include <vector>
#include <iostream>
#include <string>
#include "parameter.h"
#include "data.h"

using namespace std;

Parameter::Parameter(){
}

Parameter::Parameter(Data dat){
  data = dat;
}

void Parameter::inicialize() {}

int Parameter::getQSize(){
  return questions.size();
}

string Parameter::ask(){}

string Parameter::read(bool lim){
  if(lim){
    cin.ignore();
  }
  temp = " ";
  getline(cin, temp);
  return temp;
}

string Parameter::observation(string msg, bool cinq){
  cout << msg << endl;
  string line = read(cinq);
  if(line == "n"){
    return "";
  }else
    return line + ".";
}

Health::Health():
Parameter()
{
  inicialize();
}

Education::Education() :
  Parameter()
{
  inicialize();
}

Feeding::Feeding():
Parameter()
{
  inicialize();
}

Sleep::Sleep():
Parameter()
{
  inicialize();
}

Hygiene::Hygiene():
Parameter()
{
  inicialize();
}

Leisure::Leisure() :
Parameter()
{
  inicialize();
}

Health::Health(Data data):
Parameter(data)
{
  inicialize();
}

Education::Education(Data data) :
  Parameter(data)
{
  inicialize();
}

Feeding::Feeding(Data data):
Parameter(data)
{
  inicialize();
}

Sleep::Sleep(Data data):
Parameter(data)
{
  inicialize();
}

Hygiene::Hygiene(Data data):
Parameter(data)
{
  inicialize();
}

Leisure::Leisure(Data data) :
Parameter(data)
{
  inicialize();
}

void Health::inicialize(){
  questions.push_back("Ha acudido al médico estos dias?");
  questions.push_back("Motivo: (c = cita, m = consulta por molestias)");
  questions.push_back("Observaciones del médico: ");
  questions.push_back("Presentó alguna molestia?");
  questions.push_back("Descripción de las molestias:");
  questions.push_back("Ha acudido al odontólogo?");
  questions.push_back("Observaciones del odontólogo: ");
}

void Education::inicialize(){
  questions.push_back("Ha tenido exámenes?");
  questions.push_back("Exámenes: ");
  questions.push_back("Observaciones sobre semilleros: ");
}

void Feeding::inicialize(){
  questions.push_back("Rechaza algún alimento?");
  questions.push_back("Qué alimento rechaza?");
  questions.push_back("Observaciones sobre la alimentación: ");
}

void Sleep::inicialize(){
  questions.push_back("Observaciones sobre el sueño: ");
}

void Hygiene::inicialize(){
  questions.push_back("Ha recibido dotación?");
  questions.push_back("Observaciones sobre la higiene: ");
}

void Leisure::inicialize(){
  questions.push_back("Ha realizado actividad física? f = si incluye futbol o pingpong");
  questions.push_back("Actividades fisicas que ha realizado:");
  questions.push_back("Libro que está leyendo: ");
}

string Health::ask(){
  string answer = "Salud: El joven ";
  string aux = "";
  bool pMs = true;
  cout << questions[0] << endl;
  char r;
  cin >> r;
  if(r == 'n'){
    answer+= "no";
  }else{
    cout << questions[1] << endl;
    cin >> r;
    if(r == 'm'){
      pMs = false;
      aux = " debido a que presentaba algunas molestias. El médico ";
    }else{
      aux = " ya que tenia cita de revisión, en la cual se";
    }
    cout << questions[2] << endl;
    read(true);
    temp = " dió las siguientes observaciones: " + temp;
  }
  answer += " ha asistido al médico"+aux+temp+". ";
  temp = "";
  if(pMs){
    cout << questions[3] << endl;
    cin >> r;
    if(r == 's'){
      answer += "P";
      cout << questions[4] << endl;
      read(true);
      temp = ", las cuales fueron "+temp;
    }else{
      answer +="No p";
    }
    answer+="resentó molestias de salud"+temp+". ";
    temp = "";
  }else{
    cout << questions[4] << endl;
    read(false);
    answer+= "Las molestias por las que consultó fueron: "+temp+". ";
    temp = "";
  }
  cout << questions[5] << endl;
  cin >> r;
  if(r == 'n'){
    answer+= "No h";
  }else{
    cout << questions[6] << endl;
    read(true);
    temp = ", el cual dió las siquientes observaciones: " + temp;
    answer+= "H";
  }
  answer += "a acudido al odontólogo"+temp+".";
  return answer;
}

string Education::ask(){
  string answer = "\n\nEducación: ";
  char r;
  string aux;
  bool cinq = false;
  if (data.getHolidays()){
    answer += "El joven se encuentra en vacaciones por lo que no tiene compromisos académicos.";
  }else{
     cout << "Educación" << endl;
    answer += "Se encuentra en el semestre "
      + convertToString(data.getSemester())
      + " de ingeniería de sistemas y en el nivel "
      + data.getEngLvl() + " Inglés. ";
    cout << questions[0] << endl;
    cin >> r;
    aux = "a tenido exámenes";
    if (r == 's') {
      cout << questions[1] << endl;
      read(true);
      answer+= "H"+aux+ " en las siguientes materias: "+ temp+".";
    }else{
      answer+="No h"+aux+".";
      cinq = true;
    }
    aux = "";
    temp = "";
    cout << questions[2] << endl;
    answer += "En cuanto a los semilleros, "+read(cinq)+".";
  }
  return answer;
}

string Feeding::ask(){
  cout << "Alimentación" << endl;
  string answer = "\n\nAlimentación: ";
  char r;
  int des = 1;
  bool cinq = false;
  if(data.getHolidays()){
    des = 3;
    answer += "Como está en vacaciones, consume sus alimentos en la casa. ";
  }
  answer += "LLeva su comida a la universidad, donde además recibe refigerio por parte del departamento de beneficios y compensaciones. ";
  answer += " Desayuna a las "
    + convertToString(data.getHr('l'))
    + ":30 am (aprox) después de levantarse; "
    + " Almuerza al medio día y come a las "
    + convertToString(data.getHr('a')-des)
    + ":00 pm (aprox). ";
  if(!data.getHolidays()){
    answer += "Como está estudiando, lleva almuerzo a la universidad y además recibe refigerio en la universidad. ";
  }
    cout << questions[0] << endl;
    cin >> r;
    if(r == 's'){
      cout << questions[1] << endl;
      answer +="Rechaza "+read(true)+ ".";
    }else{
      answer += "No rechaza ningún alimento. ";
      cinq = true;
    }

  answer += observation(questions[2], cinq);
  return answer;
}

string Sleep::ask(){
  cout << "Sueño" << endl;
  string answer = "\n\nSueño: ";
  char r;
  answer += "El joven se acuesta a las "
    + convertToString(data.getHr('a'))
    + ":00 pm (aprox) y se levanta a las "
    + convertToString(data.getHr('l')) + ":00 am. ";
  answer+= observation(questions[0], false);
  return answer;
}

string Hygiene::ask(){
  cout << "Higiene" << endl;
  string answer = "\n\nHigiene: El joven es organizado, se cepilla tres veces al día y posee todos los artículos de aseo personal básico. ";
  char r;
  cout << questions[0] << endl;
  cin >> r;
  if(r == 's'){
    answer += "Ha recibido datación. ";
  }
  answer+=observation(questions[1], true);
  return answer;
}

string Leisure::ask(){
  cout << "Recreación" << endl;
  string answer = "\n\nRecreación: ";
  char r;
  bool cinq = false;
  cout << questions[0] << endl;
  cin >> r;
  if(r == 'f'){
    cout << questions[1] << endl;
    answer += "Ha jugado con sus amigos "+read(true) + ". ";
  }else if (r == 's'){
    cout << questions[1] << endl;
    answer += read(true)+" .";
  }else {
    answer += "No ha realizado ninguna actividad física últimamente. ";
    cinq = true;
  }
  cout << questions[2] << endl;
  answer += "Está leyendo "+read(false)+". ";
  return answer;
}
