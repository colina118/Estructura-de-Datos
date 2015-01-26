#include <iostream>
using namespace std;

int suma(int*, int, int);

int main()
{
    int n;
    
    cout << "numero de elementos";
    cin >> n;
    
    int *a = new int[n];
    
    
    for(int i = 0; i < n; i++)
    {
        *(a+i) = 1;
    }
    
    cout << "Suma: " << suma(a, 0, n);
    
    return 0;
}

int suma(int *a, int i, int n)
{
    if (i == n)
    {
        return 0;
    }
    else
    {
        return *(a+i) + suma (a, i+1, n);
    }
}