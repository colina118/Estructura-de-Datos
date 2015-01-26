#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BusquedaGenerica.h"
#include "Libro.h"

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
    
    
    //bool existe = BusquedaGenerica<int>::busquedaSecuencial(enteros, valor, longitud);
    
    bool existe = BusquedaGenerica<int>::busquedaBinaria(enteros, valor, 0, longitud);
    
    if (existe)
    {
        std::cout << "El valor si existe en el arreglo" << std::endl;
    }
    else
    {
        std::cout << "El valor no existe dentro del arreglo" << std::endl;
    }
    
    /*buscar en punto flotante*/
    
    float flotantes[longitud];
    
    for (int i = 0; i < longitud; ++i)
    {
        enteros[i] = rand() % 100 * 0.5;
    }
    
    imprimeArreglo<float>(flotantes, longitud);
    
    std::cout << "introduce el valor a buscar";
    
    float valorf;
    
    std:: cin >> valorf;
    
    
    existe = BusquedaGenerica<float>::busquedaSecuencial(flotantes, valorf, longitud);
    
    if (existe)
    {
        std::cout << "El valor si existe en el arreglo" << std::endl;
    }
    else
    {
        std::cout << "El valor no existe dentro del arreglo" << std::endl;
    }
    
    //buscar libros
    
    
    const int nlibros = 3;
    Libro biblioteca[nlibros];
    
    biblioteca[0] = Libro();
    biblioteca[1] = Libro("Cien años de soledad", 1968, "1234");
    biblioteca[2] = Libro("El arte de la guerra", 1900, "6789");
    
    imprimeArreglo<Libro>(biblioteca, nlibros);
    
    
    
    return 0;
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