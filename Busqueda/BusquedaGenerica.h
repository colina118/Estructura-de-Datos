#include <iostream>

template <class T>
class BusquedaGenerica
{
    public:
        static bool busquedaSecuencial(T[], T, int);
        static bool busquedaBinaria(T[], T, int, int);
};

template <class T>
bool BusquedaGenerica<T>::busquedaSecuencial(T v[], T valor, int longitud)
{
    bool existe = false;
    int indice = 0;
    
    if (longitud == 0) return existe;
    
    while (!existe && indice < longitud)
    {
        if(v[indice++] == valor)
        {
            existe = true;
        }
    }
    return existe;
}

template <class T>
bool BusquedaGenerica<T>::busquedaBinaria(T v[], T valor, int inferior, int superior)
{
    if (inferior >= superior)
    {
        return false;
    }
    else
    {
        int mitad = (inferior + superior) / 2;
        if (v[mitad] == valor)
        {
            return true;
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