// ArrayConsoleApplication.cpp

#include <iostream>

using namespace std;

void task1()
{
	/*
	int number1, number2, number3, number4;

	cout << "Podaj 1 liczbê \n";
	cin >> number1;
	cout << "Podaj 2 liczbê \n";
	cin >> number2;
	cout << "Podaj 3 liczbê \n";
	cin >> number3;
	cout << "Podaj 4 liczbê \n";
	cin >> number4;

	*/

	const unsigned int arrayNumberSize = 5;
	int numbers[arrayNumberSize];

	for (int i = 0; i < arrayNumberSize; i++)
	{
		cout << "Podaj " << (i + 1) << " liczbe\n";
		cin >> numbers[i];
	}

	for (int i = arrayNumberSize - 1; i >= 0; i--)
	{
		cout << numbers[i] << ", ";
	}

	cout << "\n";
}


void task2()
{
	const unsigned int arrayNumberSize = 5;
	int numbers[arrayNumberSize];


	srand(time(NULL));
	for (int i = 0; i < arrayNumberSize; i++)
	{
		numbers[i] = rand() % 11;
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";

	//licze srednia

	int sum = numbers[0];

	for (int i = 0; i < arrayNumberSize; i++)
	{
		sum = sum + numbers[i];
	}

	double avg = sum * 1.0 / arrayNumberSize;

	cout << "Suma wynosi: " << sum << "\n";
	cout << "Œrednia to: " << avg << "\n";
}

//Napisz program który uzupe³ni tablice liczbami losowymi. A nastepnie znajdzie minimum i maksimum.

void task3()
{
	const unsigned int arrayNumberSize = 5;
	int numbers[arrayNumberSize];


	srand(time(NULL));
	for (int i = 0; i < arrayNumberSize; i++)
	{
		numbers[i] = rand() % 11;
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";

	int max = numbers[0];
	for (int i = 0; i < arrayNumberSize; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}
	cout << "Najwieksza liczba to: " << max << "\n";

	cout << "\n\n";

	int min = numbers[0];
	for (int i = 0; i < arrayNumberSize; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}
	cout << "Najmniejsza liczba to: " << min << "\n";
}

void task4()
{

}

int main()
{
    setlocale(LC_CTYPE, "polish");
	task3();
}