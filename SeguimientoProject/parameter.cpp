#include "parameter.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

Parameter::Parameter(){
  cout << "Constructor de parametros" << endl;
}

void Parameter::inicialize() {}

int Parameter::getQSize(){
  return questions.size();
}

string Parameter::ask(){}

void Parameter::read(){
  temp = "";
  cin.ignore();
  getline(cin, temp);
}
Health::Health(){
  #ifdef debug
  cout << "Constructor Salud" << endl;
  #endif
  Parameter();
  inicialize();
}

void Health::inicialize(){
  #ifdef debug
  cout << "inicializando salud" << endl;
  #endif
  questions.push_back("Ha acudido al médico estos dias?");
  questions.push_back("Motivo: (c = cita, m = consulta por molestias)");
  questions.push_back("Observaciones del médico: ");
  questions.push_back("Presentó alguna molestia?");
  questions.push_back("Descripción de las molestias:");
  questions.push_back("Ha acudido al odontólogo?");
  questions.push_back("Observaciones del odontólogo: ");
}

string Health::ask(){
  string answer = "Salud: El joven ";
  string movito = "";
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
     }
     cout << questions[2] << endl;
     read();
     temp = " ,el cual dió las siquientes observaciones: " + temp;
   }
   answer += " ha asistido al médico"+temp+". ";
   temp = "";
   if(pMs){
     cout << questions[3] << endl;
     cin >> r;
     if(r == 's'){
       answer += "P";
       cout << questions[4] << endl;
       read();
       temp = ", las cuales fueron "+temp;
     }else{
       answer +="No p";
     }
     answer+="resentó molestias de salud"+temp+". ";
   }else{
     cout << questions[4] << endl;
     read();
     answer+= " Las molestias por las que consultó fueron: "+temp+". ";
     temp = "";
   }
   cout << questions[5] << endl;
   cin >> r;
   if(r == 'n'){
     answer+= "No h";
   }else{
     cout << questions[6] << endl;
     read();
     temp = ", el cual dió las siquientes observaciones: " + temp;
     answer+= "H";
   }
   answer += "a acudido al odontólogo"+temp+".";
   return answer;
}

Education::Education(){
  #ifdef debug
  cout << "Constructor Educacion" << endl;
  #endif
  Parameter();
  inicialize();
}

void Education::inicialize(){
  #ifdef debug
  cout << "inicializando educación" << endl;
  #endif
  questions.push_back("Está en vacaiones?");
  questions.push_back("Ha tenido exámenes?");
  questions.push_back("Exámenes: ");
  questions.push_back("Observaciones sobre semilleros: ");
}

string Education::ask(){
  string answer = "Educación: ";
  char r;
  string aux;
  cout << questions[0] << endl;
  cin >> r;
  if (r == 's'){
    answer+= "El joven se encuentra en vaciones por lo que no tiene compromisos académicos.";
  }else{
    cout << questions[1] << endl;
    cin >> r;
    aux = "a tenido exámenes";
    if (r == 's') {
      cout << questions[2] << endl;
      read();
      answer+= "H"+aux+ " en las siguientes materias: "+ temp+".";
    }else{
      answer+="No h"+aux+".";
    }
    aux = "";
    temp = "";
    cout << questions[3] << endl;
    read;
    answer+=temp;
  }
  return answer;
}
/**
Feeding::Feeding(){
  Parameter();
}

void Feeding::inicialize(){
  #ifdef debug
  cout << "inicializando alimentación" << endl;
  #endif
}
**/
