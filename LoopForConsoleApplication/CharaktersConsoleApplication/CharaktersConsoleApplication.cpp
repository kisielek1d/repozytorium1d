//CharactersConsoleApplication

#include <iostream>

using namespace std;

//Napisz program ktory pobierze znak od u�ytkowanika i wy�wietli go.

void task1()
{
	char characterFromUser;

	cout << "Podaj znak i zatwierd� Enterem \n";
	cin >> characterFromUser;

	cout << "Podano znak: " << (int)characterFromUser << "\n";

	characterFromUser = characterFromUser + 1;

	cout << "Podano znak: " << (int)characterFromUser << "\n";

	characterFromUser = 97;
	characterFromUser = 'a';
	characterFromUser = 'a' + 1; // 'b'
}

void task3()
{
	string userName;
	cout << "podaj swoje imi�\n";
	cin >> userName;

	cout << "Witaj" << userName << " tutaj \n";

	userName = "To jest nowy tekst";
}

/* Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123"
* program powinien wy�wietli� "has�o jest poprawne" jest jest inne " has�o jest nie poprawne */

void task4()
{
	string password;
	cout << "Podaj has�o\n";
	cin >> password;

	if (password == "abc123")
		cout << "Has�o jest poprawne\n";
	else
		cout << "Has�o jest nie poprawne\n";
}

//Napisz program kt�ry wczyta �a�cuch znak�w i napisze ile jest ma�ych liter

void task5()
{
	string textFromUser;
	cout << "Podaj jaki� tekst\n";
	cin >> textFromUser;

	cout << "Podany tekst: " << textFromUser << "\n";

	cout << "Pierwszy znak w tek�cie: " << textFromUser[0] << "\n";
	cout << "Drugi znak w tek�cie: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	cout << "D�ugo�� �a�cucha znak�w: " << length << "\n";
	cout << "Ostatni znak w tek�cie: " << textFromUser[length - 1] << "\n";

	int counter = 0;

	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	cout << "Ma�ych liter 'a' jest: " << counter << "\n";
}


//Napisz program kt�ry bedzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo

void task6()
{
	string password;

		do
		{
			cout << "Podaj has�o\n";
			cin >> password;

			if (password == "abc")
				cout << "Brawo poda�es prawid�owe has�o\n";
			else
				cout << "Jeste� g�upi xD\n";
		} while (password != "abc");
}

//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")

void task7()
{
	string textFromUser;
	cout << "Podaj ci�g znak�w: ";
	cin >> textFromUser;

	bool isPalindrom = true;

	for (int fromStart = 0,  fromEnd = textFromUser.length() - 1 ;fromStart < fromEnd  ; fromStart++, fromEnd--)
	{
		if (textFromUser[fromStart] != textFromUser[fromEnd])
		{
			isPalindrom = false;
			break;
		}
	}

	if (isPalindrom = true)
		cout << "ten wyraz jest palindromem\n";
	else
		cout << "Ten wyraz nie jest palindromem\n";


}


//Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")

void task8()
{
	string word, word1;

	cout << "Podaj pierwsze s�owo: ";
	cin >> word;
	cout << "Podaj drugie s�owo: ";
	cin >> word1;

	if (word.length() != word1.length())
	{
		cout << "Podane s�owa nie s� anagramami";
	}


}

void task9()
{
	int number;
	cout << "podaj liczb�:\n";
	cin >> number;

	int tmpNumber = number;
	string binNumber = " ";

	cout << "Twoja liczba w systemie binarnym wynosi: " << binNumber << "\n"; 

	do
	{
		int rest = tmpNumber % 2;
		tmpNumber = tmpNumber / 2;

		cout << rest << "\n";
	} while (tmpNumber != 0);


}

/*
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
*/


//Program sprawdzaj�cy czy podane dwa s�owa s� anagramami(czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")


int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task3();
	//task4(); 
	//task5();
	task7();
}