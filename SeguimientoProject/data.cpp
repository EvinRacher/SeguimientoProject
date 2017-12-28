#include "data.h"
#include "date.h"

using namespace std;

Data::Data(int semester, int engLvl, string* subs, Date* date){
  //No se pudo realizar el constructor por lista
  this->semester = semester;
  this->engLvl = engLvl;
  subs = subs;
  this->date = date;

}

int Data::getSemester(){
  return semester;
}

int Data::getEngLvl(){
  return engLvl;
}


