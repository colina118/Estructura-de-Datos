#include <iostream>
using namespace std;

int MCD(int, int);

int main()
{
    int divisor = 0;
    int numerador = 0;
    
    cout << "Cual es el divisor";
    cin >> divisor;
    
    cout << "Cual es el numerador";
    cin >> numerador;
    
    if(numerador > divisor)
        {
            cout << "No puede sel mayor el numerador";
            return 1;
        }
    
    MCD(divisor, numerador);
    
    return 0;
    
}

int MCD(int divisor, int numerador)
{
    int r = 0;
    r = divisor%numerador;
    if (r == 0)
        {
            cout << "el MCD es " << numerador;
            return r;
        }
    else
        {
            return MCD(numerador, r);
        }
}