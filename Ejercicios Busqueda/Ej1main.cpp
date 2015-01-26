#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Ej1.h"

template <typename T>
void imprimeArreglo(T[], int);

int main(int argc, const char * argv[])
{
    
    //srand( (unsigned int) time(nullptr));
    
    const int longitud = 10;
    
    int enteros[longitud];
    
    for (int i = 0; i < longitud; ++i)
    {
        enteros[i] = i;
    }
    
    imprimeArreglo<int>(enteros, longitud);
    
    std::cout << "introduce el valor a buscar";
    
    int valor;
    
    std:: cin >> valor;
    
    
    //int existe = BusquedaGenerica<int>::busquedaSecuencial(enteros, valor, longitud);
    
    int existe = BusquedaGenerica<int>::busquedaBinaria(enteros, valor, 0, longitud);
    
    if (existe != -1)
    {
        std::cout << "El valor si existe en el arreglo y su posicion es: " << existe << std::endl;
    }
    else
    {
        std::cout << "El valor no existe dentro del arreglo" << existe << std::endl;
    }
}  

template <typename T>
void imprimeArreglo(T v[], int longitud)
{
    for(int i = 0; i < longitud; ++i)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl; 
}