#include <iostream>
using namespace std;

int sumaM(int** matriz, int maxRen, int maxCol, int ren, int col);

int main()
{
    int Ren;
    int Col;
    int** matriz;
    
    cout << "Cuantos renglones? " << std::endl;
    cin >> Ren;
    cout << "Cuantas columnas? " << std::endl;
    cin >> Col;
    
    matriz = new int*[Ren];
    for(int i = 0; i < Ren; i++)
    {
        *(matriz+i) = new int[Col];
    }
    
    for(int i = 0; i < Ren; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            matriz[i][j] = 1;
        }
    }
    
    cout << sumaM(matriz, Ren-1, Col-1, 0, 0) << endl;
    
    return 0;
}

int sumaM(int** matriz, int Ren, int Col, int ren, int col)
{
    if(col == Col && ren == Ren)
        return matriz[Ren][Col];
    else if(col == Col)
        return matriz[ren][col] + sumaM(matriz, Ren, Col, ren+1, 0);
    else
        return matriz[ren][col] + sumaM(matriz, Ren, Col, ren, col+1);
}
