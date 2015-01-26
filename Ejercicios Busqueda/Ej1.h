#include <iostream>

template <class T>
class BusquedaGenerica
{
    public:
        static int busquedaSecuencial(T[], T, int);
        static int busquedaBinaria(T[], T, int, int);
};

template <class T>
int BusquedaGenerica<T>::busquedaSecuencial(T v[], T valor, int longitud)
{
    int existe = -1;
    int indice = 0;
    
    if (longitud == 0) return existe;
    
    while (existe == -1 && indice < longitud)
    {
        if(v[indice] == valor)
        {
            existe = indice ;
        }
        ++indice;
    }
    return existe;
}

template <class T>
int BusquedaGenerica<T>::busquedaBinaria(T v[], T valor, int inferior, int superior)
{
    if (inferior >= superior)
    {
        return -1;
    }
    else
    {
        int mitad = (inferior + superior) / 2;
        if (v[mitad] == valor)
        {
            return mitad;
        }
        else if(valor < v[mitad])
        {
            return busquedaBinaria(v, valor, inferior, mitad);
        }
        else
        {
            return busquedaBinaria(v, valor, mitad + 1 , superior);
        }
    }
}