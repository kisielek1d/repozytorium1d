#include <iostream>

//Napisz program, kt�ry pobierze liczbe od u�ytkowanika i wy�wietli czy jest ona dodatnia czy nie

void task1()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	//wersja 1

	/*if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	if (number < 0)
	{
		std::cout << "Liczba jest ujemna\n";
	}

	if (number == 0)
	{
		std::cout << "Liczba jest r�wna zero\n";
	}
	*/

	//wersja 2

	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	else
	{
		std::cout << "Liczba jest ujemna lub wynosi zero  \n";
	}

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	 
	task1();
}	