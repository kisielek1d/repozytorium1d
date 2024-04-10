﻿﻿// CharactersConsoleApplication.cpp 
#include <iostream>

//Napisz program który pobierze znak od użytkownika i wyświeli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;

	std::cout << "Podano: " << characterFromUser << "\n";

	characterFromUser = characterFromUser + 1;

	std::cout << "Podano: " << characterFromUser << "\n";

	characterFromUser = 97;
	characterFromUser = 'a';
	characterFromUser = 'a' + 1; // 'b'
}

// Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to mała litera alfabetu.
void task2()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;

	//wersja 1
	if (characterFromUser == 'a'
		|| characterFromUser == 'b'
		|| characterFromUser == 'c'
		|| characterFromUser == 'd'
		//...
		|| characterFromUser == 'z')
	{
		std::cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		std::cout << "Podałeś inny znak\n";
	}

	//wersja 2
	if (characterFromUser >= 97
		&& characterFromUser <= 122)
	{
		std::cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		std::cout << "Podałeś inny znak\n";
	}

	//wersja 3
	if (characterFromUser >= 'a'
		&& characterFromUser <= 'z')
	{
		std::cout << "Podałes małą literę alfabetu\n";
	}
	else
	{
		std::cout << "Podałeś inny znak\n";
	}
}

//Napisz program, który poprosi cie o twoje imię i cię przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imię\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";

	userName = "To jest nowy tekst";
}

//Program sprawdzający czy podane hasło jest poprawne 
// (np. jeśli hasło jest "abc123", 
// program powinien wyświetlić "hasło poprawne",
//  jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj hasło\n";
	std::cin >> password;

	if (password == "abc123")
	{
		std::cout << "Hasło poprawne\n";
	}
	else
		std::cout << "Hasło niepoprawne\n";
}

//Napisz program, który wczyta łańcuch znaków i policzy ile jest małych liter 'a'.
void task5()
{
	std::string textFromUser = "dfsdfg";
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

	std::cout << "Podany tekst: " << textFromUser << "\n";
	std::cout << "Pierwszy znak w tekście: " << textFromUser[0] << "\n";
	std::cout << "Drugi znak w tekście: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	std::cout << "Długość łańcucha znaków: " << length << "\n";
	std::cout << "Ostatni znak w tekście: " << textFromUser[length - 1] << "\n";

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
	std::string password;
	do
	{
		std::cout << "Podaj hasło\n";
		std::cin >> password;
	} while (password != "abc123");
}

//Napisz program, który pobiera od użytkownika ciąg znaków 
// i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
void task7()
{
	std::string textFromUser;
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;


}

//Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. 
// Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.
void task8()
{
	int number = 14 + 7;
	std::cout << "Podaj liczbę:\n";
	std::cin >> number;

	int tmpNumber = number;
	std::string binNumber = "";

	do
	{
		int rest = tmpNumber % 2;
		tmpNumber = tmpNumber / 2;
		if (rest == 0)
			binNumber = "0" + binNumber;
		else
			binNumber = "1" + binNumber;

	} while (tmpNumber != 0);

	std::cout << "Liczba " << number << " binarnie to " << binNumber << "\n";
}

//Program sprawdzający czy podany ciąg znaków jest palindromem 
// (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")

void task9()
{
	std::string textFromUser;
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

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
		std::cout << "Ten wyraz jest palindromem\n";
	else
		std::cout << "Ten wyraz nie jest palindromem\n";
}

//Napisz program który wczyta np 5 liczb a nastepnie wyświetli je w odwrotnej kolejnosci

void task10()
{
	int number1, number2, number3, number4;

	cout << "Podaj 1 liczbę \n";
	cin >> number1;
	cout << "Podaj 2 liczbę \n";
	cin >> number2;
	cout << "Podaj 3 liczbę \n";
	cin >> number3;
	cout << "Podaj 4 liczbę \n";
	cin >> number4;
	
	for (int i = 1; i < 5; i++)
	{
		cout << "podaj " << i << " liczbe\n";
		cin >> (number + 1);
	}
}

/*
*  Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
* Program wyciągający informacje z numeru PESEL
* Program implementujący algorytm szyfrowania Cezara (proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).*/

int main()
{
	setlocale(LC_CTYPE, "polish");
	task8();
}