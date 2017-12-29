#include "parameter.h"
#include <vector>
#include <iostream>

using namespace std;

Parameter::Parameter(){
  inicialize();
}

void Parameter::inicialize() {}

void Parameter::ask() {}

int Parameter::getQSize(){
  return questions.size();
}

Health::Health(){
  Parameter();
  inicialize();
}

void Health::inicialize(){
  cout << "Inicializand salud" << endl;
  questions.push_back("Ha acudido al médico estos dias?");
  questions.push_back("Observaciones del médico: ");
  questions.push_back("Se enfermo?");
  questions.push_back("Ha acudido al odontólogo?");
  questions.push_back("Observaciones del odontólogo: ");
  cout << "Salud inicializada" << endl;
}

void Health::ask(int i){
   cout << questions[i] <<endl;
}
