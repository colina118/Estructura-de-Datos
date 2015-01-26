#include "Libro.h"

Libro::Libro() 
{
   titulo = "sin titulo";
   anio_pub = 0;
   isbn = "---";
}

Libro::Libro(std::string t, int ap, std::string i) : titulo(t), anio_pub(ap), isbn(i)
{
    
}

bool Libro::operator==(Libro & libro)
{
    return isbn == libro.isbn;
}

bool Libro::operator<(Libro & libro)
{
    return isbn < libro.isbn;
}

std::ostream & operator <<(std::ostream & os, Libro & libro)
{
    os << libro.titulo << std::endl;
    
    return os;
}