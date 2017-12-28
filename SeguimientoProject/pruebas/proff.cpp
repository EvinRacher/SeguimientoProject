/**

Este codigo es un ejemplo de creacion y uso de clases. A tener en cuenta:

   - En una clase, si el constructor no tiene paremetros, para declarar un objero no se escriben los parentesis.

Compilación:

g++ date.cpp proff.cpp -o <nombreDelEjecutable>

**/

#include "date.h"
#include <iostream>

using namespace std;

int main(){
  Month mes =static_cast<Month>(0);
  Date fecha(7,mes,1999);

  cout << fecha.getMonth()<<endl;
  return 0;
}
