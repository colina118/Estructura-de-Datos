#include <iostream>
using namespace std;

int sumaDigitos(int);

int main()
{
    int num;
    cout << "Escribe el numero";
    cin >> num;
    
    cout << "La suma es: " << sumaDigitos(num);
    
    return 0;
}

int sumaDigitos(int n)
{
    int resto = n%10;
    n = n / 10;
    if (n == 0)
    {
        return resto;
    }
    else
    {
        return resto + sumaDigitos(n);
    }
}