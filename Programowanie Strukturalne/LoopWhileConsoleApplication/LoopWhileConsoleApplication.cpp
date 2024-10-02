// LoopWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	int number;
	std::cout << "Podaj liczbę dodatnią\n";
	std::cin >> number;

	int tmpNumber = number;
	int reverseNumber = 0;
	while (tmpNumber > 0)
	{
		int rest = tmpNumber % 10;
		reverseNumber = reverseNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	}

	if (number == reverseNumber)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczbie nie jest palindromem\n";
}


void task2()
{
	int number;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;
	int counter = 0;
	while (counter != number)
	{
		std::cout << "Hello World\n";
		counter++;
	}
}


void task3()
{

}


int main()
{
	task1();
	task2();
}

