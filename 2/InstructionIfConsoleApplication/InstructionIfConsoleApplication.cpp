#include <iostream>

/*
Operatory por�wnania:
> wieszko�ci
< mniejszo�ci
>= wieksze badz r�wne
<= mniejsze badz r�wne
== r�wne
!= r�ne

Operatory logiczne:

|| or/lub
&& and/i
!  not/nie	


A B  A || B		A && B		!A
f f		f	       f		 
f t		t		   f		 t
t f		t		   f
t t		t		   t		 f

Priorytety operator�w:
* /
+ -
> < >= <= == !=
&&
||
=

*/
//Napisz program, kt�ry pobierze liczbe od u�ytkowanika i wy�wietli czy jest ona dodatnia czy nie 
/*
void task1()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;
}
	*/
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

	/*
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	else
	{
		std::cout << "Liczba jest ujemna lub wynosi zero  \n";
	}

}
	*/

void task2()
{
	float number;
	std::cout << "Podaj liczbe \n";
	std::cin >> number;
//wersja 1
	/*
	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "Liczba jest w zakresie \n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}*/
	 
 //wersja 2

	if (number >= 1 && number < 10)
	{
		std::cout << "Liczba jest w zakresie\n";

	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	
	//task1()
	task2();
}	