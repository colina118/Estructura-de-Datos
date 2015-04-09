#include <iostream>
#include "LinkedList.h"
#include <string>

using namespace mike;

int main()
{
	std::string pal;
	std::string nueva;
	LinkedList<std::string> primera;
	LinkedList<std::string> lista;
	LinkedList<std::string> listaa;
	int tam;
	int cont;
	bool test;

	for (int i = 0; i < pal.size(); i++)

		if (pal[i] == '1' || pal[i] == '2' || pal[i] == '3' || pal[i] == '4' || pal[i] == '5' || pal[i] == '6' || pal[i] == '7' || pal[i] == '8' || pal[i] == '9')
		{
		nueva += pal[i];
		for (int j = i; j < pal.size(); j++)
		{
			if (pal[j] != ',')
			{
				nueva += pal[j];
			}
			else
			{
				primera.insertBack(nueva);
			}
		}
		}
		else if (pal[i] == '}')
		{

		}
		else if (pal[i] == '+')
		{
			for (int k = i; k < pal.size(); k++)

				if (pal[k] == '1' || pal[k] == '2' || pal[k] == '3' || pal[k] == '4' || pal[k] == '5' || pal[k] == '6' || pal[k] == '7' || pal[k] == '8' || pal[k] == '9')
				{
				nueva += pal[k];
				for (int l = k; l < pal.size(); l++)
				{
					if (pal[l] != ',')
					{
						nueva += pal[l];
					}
					else
					{
						lista.insertBack(nueva);
					}
				}
				}
				else if (pal[i] == '}')
				{

				}
			for (auto i : lista)
			{
				listaa.insertBack(i.getInfo());
			}
			for (auto j : primera)
			{
				cont = 0;
				test = true;
				while (test == true && cont < listaa.size())
				{
					if (j.getInfo() == listaa.at(cont)->getInfo())
					{
						test = false;
						break;
					}
					++cont;
				}
				if (test)
				{
					listaa.insertBack(j.getInfo());
				}
			}
		}
		else if (pal[i] == '*')
		{
			for (int m = i; m < pal.size(); m++)

				if (pal[m] == '1' || pal[m] == '2' || pal[m] == '3' || pal[m] == '4' || pal[m] == '5' || pal[m] == '6' || pal[m] == '7' || pal[m] == '8' || pal[m] == '9')
				{
				nueva += pal[m];
				for (int l = m; l < pal.size(); l++)
				{
					if (pal[l] != ',')
					{
						nueva += pal[l];
					}
					else
					{
						lista.insertBack(nueva);
					}
				}
				}
				else if (pal[i] == '}')
				{

				}
			for (auto i : lista)
			{
				for (auto j : primera)
				{
					if (i.getInfo() == j.getInfo())
					{
						listaa.insertBack(i.getInfo());
						break;
					}
				}
				cont++;
			}
		}
}