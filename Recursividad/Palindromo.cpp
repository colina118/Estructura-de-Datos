#include <iostream>
#include <string>


bool palindromo (std:: string, int, int);

int main()
{
    std:: string pal;
    std::cout << "Meteme la palabra" << std:: endl;
    std::cin >> pal;
    
    int tam = pal.length();
    
    bool palin = palindromo(pal, 0, (tam-1));
    
    if(palin)
    {
        std::cout << "Es palindromo tu oración";
    }
    else
    {
        std:: cout << "No es palindromo";
    }
    
    
}

bool palindromo (std:: string pal, int principio, int fin)
{
    if (principio >= fin)
    {
        return true;
    }
    else if (pal[principio] != pal[fin])
    {
        return false;
    }
    else
    {
        return palindromo(pal, principio +1, fin-1);
    }

}