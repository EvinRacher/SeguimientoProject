/**

Este codigo es un ejemplo de creacion y uso de clases. A tener en cuenta:

   - En una clase, si el constructor no tiene paremetros, para declarar un objero no se escriben los parentesis.

Compilación:

g++ date.cpp proff.cpp -o <nombreDelEjecutable>

**/

#include "../date.h"
#include <iostream>

using namespace std;

int main(){
  Date fecha(7,1,1999);

  cout << fecha.getMonthS()<<endl;
  return 0;
}
