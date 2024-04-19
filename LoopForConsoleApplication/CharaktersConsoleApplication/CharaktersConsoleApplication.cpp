// CharactersConsoleApplication.cpp 
#include <iostream>
  
using namespace std;

//Napisz program który pobierze znak od użytkownika i wyświeli go.
void task1()
{
	char characterFromUser;
	cout << "Podaj jeden znak:\n";
	cin >> characterFromUser;

	cout << "Podano: " << characterFromUser << "\n";

	characterFromUser = characterFromUser + 1;

	cout << "Podano: " << characterFromUser << "\n";

	characterFromUser = 97;
	characterFromUser = 'a';
	characterFromUser = 'a' + 1; // 'b'
}

// Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to mała litera alfabetu.
void task2()
{
	char characterFromUser;
	cout << "Podaj jeden znak:\n";
	cin >> characterFromUser;

	//wersja 1
	if (characterFromUser == 'a'
		|| characterFromUser == 'b'
		|| characterFromUser == 'c'
		|| characterFromUser == 'd'
		//... 
		|| characterFromUser == 'z')
	{
		cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		cout << "Podałeś inny znak\n";
	}

	//wersja 2
	if (characterFromUser >= 97
		&& characterFromUser <= 122)
	{
		cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		cout << "Podałeś inny znak\n";
	}

	//wersja 3
	if (characterFromUser >= 'a'
		&& characterFromUser <= 'z')
	{
		cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		cout << "Podałeś inny znak\n";
	}
}

//Napisz program, który poprosi cie o twoje imię i cię przywita.
void task3()
{
	string userName;
	cout << "Podaj swoje imię\n";
	cin >> userName;

	cout << "Witaj " << userName << " tutaj.\n";

	userName = "To jest nowy tekst";
}

//Program sprawdzający czy podane hasło jest poprawne 
// (np. jeśli hasło jest "abc123", 
// program powinien wyświetlić "hasło poprawne",
//  jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task4()
{
	string password;
	cout << "Podaj hasło\n";
	cin >> password;

	if (password == "abc123")
	{
		cout << "Hasło poprawne\n";
	}
	else
		cout << "Hasło niepoprawne\n";
}

//Napisz program, który wczyta łańcuch znaków i policzy ile jest małych liter 'a'.
void task5()
{
	string textFromUser = "dfsdfg";
	cout << "Podaj tekst\n";
	cin >> textFromUser;

	cout << "Podany tekst: " << textFromUser << "\n";
	 cout << "Pierwszy znak w tekście: " << textFromUser[0] << "\n";
	cout << "Drugi znak w tekście: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	cout << "Długość łańcucha znaków: " << length << "\n";
	cout << "Ostatni znak w tekście: " << textFromUser[length - 1] << "\n";

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	std::cout << "Małych liter 'a' jest: " << counter << "\n";
}

// Napisz program, który będzie prosił o hasło.
// Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo.
void task6()
{
	string password;
	do
	{
		cout << "Podaj hasło\n";
		cin >> password;
	} while (password != "abc123");
}

//Napisz program, który pobiera od użytkownika ciąg znaków 
// i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
void task7()
{
	string textFromUser;
	cout << "Podaj tekst\n";
	cin >> textFromUser;
}

//Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. 
// Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.
void task8()
{
	int number = 14 + 7;
	cout << "Podaj liczbę:\n";
	cin >> number;

	int tmpNumber = number;
	string binNumber = "";

	do
	{
		int rest = tmpNumber % 2;
		tmpNumber = tmpNumber / 2;
		if (rest == 0)
			binNumber = "0" + binNumber;
		else
			binNumber = "1" + binNumber;

	} while (tmpNumber != 0);

	cout << "Liczba " << number << " binarnie to " << binNumber << "\n";
}

//Program sprawdzający czy podany ciąg znaków jest palindromem 
// (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")

void task9()
{
	string textFromUser;
	cout << "Podaj tekst\n";
	cin >> textFromUser;

	bool isPalindrome = true;

	//sprawdzenie przeciwieństwa
	for (int fromStart = 0, fromEnd = textFromUser.length() - 1; fromStart < fromEnd; fromStart++, fromEnd--)
	{
		if (textFromUser[fromStart] != textFromUser[fromEnd])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome == true)
		cout << "Ten wyraz jest palindromem\n";
	else
		cout << "Ten wyraz nie jest palindromem\n";
}

//Napisz program który wczyta np 5 liczb a nastepnie wyświetli je w odwrotnej kolejnosci

void task10()
{
	/*
	int number1, number2, number3, number4;

	cout << "Podaj 1 liczbę \n";
	cin >> number1;
	cout << "Podaj 2 liczbę \n";
	cin >> number2;
	cout << "Podaj 3 liczbę \n";
	cin >> number3;
	cout << "Podaj 4 liczbę \n";
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


void task11()
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
	cout << "Średnia to: " << avg << "\n";
}

//Napisz program który uzupełni tablice liczbami losowymi. A nastepnie znajdzie minimum i maksimum.

void task12()
{
	const unsigned int arrayNumberSize = 5;
	int numbers[arrayNumberSize];


	srand(time(NULL));
	for (int i = 0; i < arrayNumberSize; i++)
	{
		numbers[i] = rand() % 11 - 2000;
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";

	int max = numbers[???];
	for (int i = 0; i < arrayNumberSize; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}
	cout << "Najwieksza liczba to: " << max << "\n";
}

/*
* Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
* Program wyciągający informacje z numeru PESEL
* Program implementujący algorytm szyfrowania Cezara (proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).*/

int main()
{
	setlocale(LC_CTYPE, "polish");
	task12();
}