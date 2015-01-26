#include <iostream>
#include "string.h"
using namespace std;

int invertir (int num, int a);

int main()
{
    int numero;
    int multi;
    cout << "Escribe el numero que deseas invertir" << endl;
    cin >> numero;
    cout << "El numero invertido es: " << invertir(numero, 0) << endl;
    
    
}

int invertir (int num, int a) {  

  int modulo = num % 10;
  num = num/10;
  
  if(num == 0){
   return modulo + a;
  }
  else {
   return invertir(num,(modulo + a)*10);
  }
} 