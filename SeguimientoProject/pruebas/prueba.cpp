#include <iostream>

using namespace std;

class Prueba{
public:
  Prueba();

};
int obtArray();
void impArray(int *a);

int main(){
  int arrayP[]={6,7,8,9};
  impArray(arrayP);
  return 0;
}

void impArray(int *a){
  int lim = (sizeof(a)/sizeof(a[0]));
  cout << lim << endl;
  for(int i = 0; i < lim;i++){
    cout << a[i] << endl;
  }
}







int obtArray(){
  int a[]={1,2,3,4,5};

  return *a;
}
