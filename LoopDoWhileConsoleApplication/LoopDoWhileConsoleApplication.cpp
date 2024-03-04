// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	/*
	int number;
	std::cout << "Podaj liczbę dodatnią\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczbę dodatnią\n";
			std::cin >> number;

		}
			if (number < 0)
			{
			   std::cout << "Podaj liczbę dodatnią\n";
			   std::cin >> number;
			}
				 if (number < 0)
				 {
					 std::cout << "Podaj liczbę dodatnią\n";
					 std::cin >> number;

				 }
	}
	*/
	int number;

	do
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Podano liczbę " << number << "\n";
}

void task2()
{
	int randomNumber, numberFromUser;

	srand(time(0));
	randomNumber = rand() % 100;

	// std::cout << "Liczba losowa " << randomNumber << "\n";

	do
	{
		std::cout << "Podaj liczbę\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Liczba jest za duzą\n";
		if (numberFromUser < randomNumber)
			std::cout << "Liczba jest za mała\n";
	} while (numberFromUser != randomNumber);

	/* {
		std::cout << "Podaj liczbę: ";
		std::cin >> numberFromUser;

		if (numberFromUser = randomNumber)
		{

			std::cout << "Podaj liczbę: ";
			std::cin >> numberFromUser;

			if (numberFromUser = randomNumber)
			{
				//...
			}
		}
	}
	*/
	std::cout << "Gratulacje, zgadłeś liczbe\n";
}

//Napisz program który wyświetli liczby całkowite z przedziału <0, x) (wartosc x podaje użytkownik)

void task3()
{
	int upperRange;
	std::cout << "Podaj górny zakres: \n";
	std::cin >> upperRange;

	/*std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";

		if (upperRange >= 2)
		{
			std::cout << "2, ";

			if (upperRange >= 3)
			{
				std::cout << "3, ";
			}
		}
	}*/
	int number = 0;


	do
	{
		std::cout << "O , ";
		number = number + 1;
	} while (upperRange >= number);
}


//Napisz program który policzy sumę cyfr podanej przez uzytkownika liczby
void task4()
{
	int number;
	do {
		std::cout << "Podaj Liczbę Dodatnią\n";
		std::cin >> number;
	} while (number < 0);
	int tmpNumber;
	tmpNumber = 0;
	int sumOfDigits;
	sumOfDigits = 0;
	/*if (number - tmpNumber % 10 != 0);
	{
		tmpNumber++;
		if (number - tmpNumber % 10 != 0);
	}
		{
			tmpNumber++;
			if (number - tmpNumber % 10 != 0);
		}
			{
			tmpNumber++;
			if (number - tmpNumber % 10 != 0);
			}
	*/
	do
	{
		int rest = number % 10;
		sumOfDigits = sumOfDigits + rest;

		number = number / 10;

	} while (number > 0);
	std::cout << "suma cyfr wynosi " << sumOfDigits << "\n";

}





/*
*
*
* Poproś użytkownika o podawanie liczb, aż wprowadzi zero. Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.
*/

//Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.


void task5()
{
	int number;

	std::cout << "Podaj liczbę całkowitą :\n ";
	std::cin >> number;

	int amountOfDigits = 0;
	int temp = number;

	do {
		temp /= 10;
		amountOfDigits++;
	} while (temp != 0);
	{
		std::cout << "Liczba cyfr w podanej liczbie to: " << amountOfDigits << "\n";
	}
}

//Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.

void task6()
{
	int number;
	int even = 0;
	int odd = 0;

	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	while (number != 0)
	{
		int cyfra = number % 10;

		if (cyfra % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		number /= 10;
	}

	if (even > odd)
		std::cout << "Więcej jest cyfr parzystych";
	if (even == odd)
		std::cout << "Cyfr parzystych jest tyle samo co nieparzystych";
	else
		std::cout << "Wiecej jest cyfr nieparzystych";
}

//Poproś użytkownika o podawanie liczb, aż wprowadzi zero. Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.
void task7()
{
	int number;
	int sum = 0;
	int amount = 0;

	std::cout << "Podawaj liczby (wpisz 0, aby zakończyć)\n";

	do
	{
		std::cin >> number;
		sum += number;
		amount++;
	} while (number != 0);

	sum -= 0;
	amount--;

	if (amount > 0)
	{
		double srednia = static_cast<double>(sum) / amount;

		std::cout << "Suma wprowadzonych liczb: " << sum << "\n";
		std::cout << "Średnia arytmetyczna: " << srednia << "\n";
	}
	else
	{
		std::cout << "Nie wprowadzono żadnych liczb. \n";
	}
}


void task8()
{
	int number;

	do
	{
		std::cout << "podaj liczbę dodatnią \n";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigits = 1;
		
	/*
	if (number > 9)
	{
		number = number / 10;
		numberOfDigits++; 

		if (number > 9)
		{
			number = number / 10;
			numberOfDigits++;

			if (number > 9)
			{
				number = number / 10;
				numberOfDigits++;
			}
		}

	}
	*/
	if (number > 9)
	{
		do
		{
			number = number / 10;
			numberOfDigits++;
		} while (number > 9);
	}

	std::cout << "Ilość cyfr w liczbie to " << numberOfDigits << "\n";
}


int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	task8();
}