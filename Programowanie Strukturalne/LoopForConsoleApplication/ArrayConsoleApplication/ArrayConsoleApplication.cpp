// ArrayConsoleApplication.cpp

#include <iostream>

using namespace std;

/*
DRY - dont repeat yourself
KISS - kept in simple, stupid
YAGNI - you aren't gonna need it
*/


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

//napisz program ktory wczyta numer dnia tygodnia a nastepnie wyswietli nazwe tego dnia lub komunikat b³edu

void task4()
{
	int dayNumberFromUser;
	cout << "Podaj numer dnia tygodnia: \n";
	cin >> dayNumberFromUser;

	string nameOfDay[7];
	nameOfDay[0] = "poniedzia³ek";
	nameOfDay[1] = "wtorek";
	nameOfDay[2] = "œroda";
	nameOfDay[3] = "czwartek";
	nameOfDay[4] = "pi¹tek";
	nameOfDay[5] = "sobota";
	nameOfDay[6] = "niedziela";
	
	if (dayNumberFromUser >= 0 && dayNumberFromUser <= 6)
	{
		cout << "Nazwa dnia to " << dayNumberFromUser[nameOfDay ] << "\n";
	}
	else
	{
		cout << "Nie ma takiego dnia";
	}
}

//sortowanie tablicy przez wybór

void task5()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 100;
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";

	//algorytm sortuj¹cy
	for (int i = 0; i <= ARRAY_NUMBERS_SIZE - 2; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < ARRAY_NUMBERS_SIZE; j++)
		{
			if (numbers[j] < numbers[minIndex])
				minIndex = j;
		}
		int tmp = numbers[i];
		numbers[i] = numbers[minIndex];
		numbers[minIndex] = tmp;
	}

	cout << "Po posortowaniu:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";
}

void task6()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 100;
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";

	//algorytm sortuj¹cy (b¹belkowy)

	for (int i = 0; i < ARRAY_NUMBERS_SIZE - 1; i++)
	{
		for (int j = 0; j < ARRAY_NUMBERS_SIZE - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				int tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = tmp;
			}
		}
	}

	cout << "Po posortowaniu:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";
}

//Napisz program który wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu. Metoda sito Eratostenesa
void task7()
{
	const int ARRAY_NUMBER_SIZE = 50;
	bool sieve[ARRAY_NUMBER_SIZE];
	for (int i = 2; i < ARRAY_NUMBER_SIZE; i++)
	{
		sieve[i] = true;
	}

	for (int i = 2; i < ARRAY_NUMBER_SIZE; i++)
	{
		if (sieve[i]/* == true*/)
		{
			for (int j = i + i; j < ARRAY_NUMBER_SIZE; j = j + i)
			{
				sieve[j] = false;
			}
		}
	}

	cout << "liczby pierwsze:\n";
	for (int i = 2; i < ARRAY_NUMBER_SIZE; i++)
	{
		if (sieve[i]/*== true*/)
		{
			cout << i << ", ";
		}
	}
}

int main()
{
    setlocale(LC_CTYPE, "polish");
	task7();
}