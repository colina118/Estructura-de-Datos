#include "Stack.h"
#include <iostream>

using namespace mike;

//Stack<int> convierte();

int main()
{
	Stack<int> binario;
	int num;
	int nu;
	std::cout << "Escriba el numero a convertir" << std::endl;
	std::cin >> num;

	while (num != 1)
	{
		num = num / 2;
		nu = num % 2;
		binario.push(nu);
	}

	binario.push(num);
	std::cout << binario << std::endl;
	return 0;
}

/*Stack<int> coniverte()
{
Stack<int> binario;
int num;
std::cout << "Escriba el numero a convertir" << std::endl;
std::cin >> num;

while (num != 1)
{
num = num % 2;
binario.push(num);
}
std::cout << binario << std::endl;
return binario;
}*/