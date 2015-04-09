#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace mike;

LinkedList<int> repetidos(LinkedList<int>);

int main()
{
	LinkedList<int> a;

	a.insert(1, 0);
	a.insert(1, 0);
	a.insert(7, 0);
	a.insert(3, 0);
	a.insert(3, 0);
	a.insert(2, 0);

	std::cout << a << std::endl;

	repetidos(a);

}

LinkedList<int> repetidos(LinkedList<int> a)
{
	LinkedList<int> b;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a.at(i)->getInfo() == a.at(j)->getInfo())
			{
				b.insert(a.at(i)->getInfo(), 0);
				j = a.size();
			}
			else
			{

			}
		}
	}
	std::cout << b << std::endl;
	return b;
}