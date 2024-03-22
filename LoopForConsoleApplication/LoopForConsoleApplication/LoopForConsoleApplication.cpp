// LoopForConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;
/*
*
*
*
*
*
* .
* 
* 
* 
* 

* 

* 
* 

*/


void task1()
{
	int number;
	std::cout << "Podaj liczbe dodatnia \n";
	std::cin >> number;
	/*
	int counter = 0;
	while (counter != number)
	{
		std::cout << "Hello World \n";
		counter++;
	}
	*/

	int counter = 0;
	for (int counter = 0; counter != number; counter++)
	{
		std::cout << "Hello World \n";
		counter++;
	}
}

//Program który drukuje prostokąt z Literek X. Wysokość i szerokość prostokąta wczytujemy z klawiatury.
//Poniższy prostąkąt ma wymiary szer=10, wys=4
//XXXXXXXXXX
//XXXXXXXXXX
//XXXXXXXXXX
//XXXXXXXXXX

void task2()
{
	int height = 0;
	int width = 0;

	std::cout << "Podaj wysokosc prostokata\n";
	std::cin >> height;
	std::cout << "Podaj szerokosc prostokata\n";
	std::cin >> width;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X ";
		}
		std::cout << "\n";
	}
}


//Program obliczający sumę liczb od 1 do 100

void task3()
{
	int amount = 0;

	for (int i = 1; i <= 100; i++)
	{
		amount += i;
	}
	std::cout << "Suma liczb od 1 do 100 wynosi: " << amount << "\n";
}


//Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników
// (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).

void task4()
{
	int number = 0;
	int perfectNumber = 0;
	int amountOfDivisor = 0;

	std::cout << "Podaj liczbe: \n";
	std::cin >> number;

	for (int i = 0; i <= number / 2; i++)
	{
		if (number % 1 == 0)
		{
			amountOfDivisor += i;
		}
	}
	amountOfDivisor == number;

	if (perfectNumber == number)
	{
		std::cout << number << "jest liczba doskonala" << "\n";
	}
	else
	{
		std::cout << number << "nie jest liczba doskonala" << "\n";
	}
}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void task5()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "Kwadrat liczby: " << i << " wynosi: " << i * i << "\n";
	}
}


// Program obliczający n!.

void task6()
{
	int n, result = 1;

	cout << "Podaj liczbe calkowita: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	cout << "Wartosc " << n << " ! wynosi: " << result << "\n";
}


//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)

void task7()
{
	int result = 1;

	for (int i = 1; i <= 10; i++)
	{
		result *= i;

		cout << "Silnia z " << i << " wynosi: " << result << "\n";
	}
}


// Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.)
void task8()
{
	int result = 1;

	for (int i = 1; i <= 9; i++)
	{
		cout << "Tabliczka mnozenia wyglada nastepujaco dla 1 x " << i << " wynosi: " << 1 * i << "\n";
	}
}

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

void task9()
{
	for (int i = 0; i <= 100; i += 3)
	{
		cout << "Liczby podzielne przez 3: " << i << "\n";
	}
}

//Program obliczający sumę kwadratów liczb od 1 do 10
void task10()
{
	int suma = 0;
	for (int i = 1; i <= 10; i++)
	{
		suma += i * i;
	}
	cout << "Suma kwadratów liczb wynosi: " << suma << "\n";
}

//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task11()
{
	int podstawa, wykładnik;
	int wynik = 1;

	cout << "Podaj podstawe: ";
	cin >> podstawa;

	cout << "Podaj wykładnik: ";
	cin >> wykładnik;

	for (int i = 0; i < wykładnik; i++)
	{
		wynik *= podstawa;
	}
	cout << "Wynik potęgowania: " << wynik << "\n";
}

//Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task12()
{
	int a = 0, b = 1, temp;

	cout << "Ciag Fibocciego do 20 elementu: \n";

	cout << a << " " << b << " ";

	for (int i = 2; i < 20; i++)
	{
		temp = a + b;
		cout << temp << " ";
		a = b;
		b = temp;
	}
}

//Program, kóry wyświetli poniższe wzory:
//	****     *       54321        121212        122333
//	***     ***      65432        212121        223334444
//	**     *****     76543        121212        333444455555
//	*     *******    87654        212121        444455555666666

void task13()
{
	
}

//Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 
//i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0.
//  Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.


void task14()
{

}

//Napisz program, który rozkłoży liczbę na czynniki pierwsze.

void task15()
{
	int number;
	cout << "Podaj liczbe\n";
	cin >> number;

	cout << " Czynniki pierwsze liczby " << number << " to: ";

	for (int i = 2; i <= number; i++)
	{
		while (number % i == 0)
		{
			cout << i << " ";

			number /= i;
		}
	}

}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	task15();
}
