#include <iostream>
using namespace std;

void hanoi(int, int, int, int);

int main()
{
    int numero_discos = 0;
    cout << "entra el numero de discos";
    cin >> numero_discos;
    
    if (numero_discos < 0)
    {
        cout<< "el numero de discos debe ser mayor que 0";
        return 1;
    }
    
    hanoi(numero_discos, 1, 2, 3);
    
    return 0;
    
}

void hanoi(int n, int x, int y, int z)
{
    if (n==1)
    {
        cout << n << ": " << x << "->" << y << endl;
    }
    else
    {
        hanoi(n-1, x, z, y);
        
        cout << n << ": " << x << "->" << y << endl;
        
        hanoi(n-1, z, y, x);
        
    }
}