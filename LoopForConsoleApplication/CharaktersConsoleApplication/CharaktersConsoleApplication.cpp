//CharactersConsoleApplication

#include <iostream>

using namespace std;

//Napisz program ktory pobierze znak od u¿ytkowanika i wyœwietli go.

void task1()
{
	char characterFromUser;

	cout << "Podaj znak i zatwierdŸ Enterem \n";
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
	cout << "podaj swoje imiê\n";
	cin >> userName;

	cout << "Witaj" << userName << " tutaj \n";

	userName = "To jest nowy tekst";
}

/* Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123"
* program powinien wyœwietliæ "has³o jest poprawne" jest jest inne " has³o jest nie poprawne */

void task4()
{
	string password;
	cout << "Podaj has³o\n";
	cin >> password;

	if (password == "abc123")
		cout << "Has³o jest poprawne\n";
	else
		cout << "Has³o jest nie poprawne\n";
}

//Napisz program który wczyta ³añcuch znaków i napisze ile jest ma³ych liter

void task5()
{
	string textFromUser;
	cout << "Podaj jakiœ tekst\n";
	cin >> textFromUser;

	cout << "Podany tekst: " << textFromUser << "\n";

	cout << "Pierwszy znak w tekœcie: " << textFromUser[0] << "\n";
	cout << "Drugi znak w tekœcie: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	cout << "D³ugoœæ ³añcucha znaków: " << length << "\n";
	cout << "Ostatni znak w tekœcie: " << textFromUser[length - 1] << "\n";

	int counter = 0;

	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	cout << "Ma³ych liter 'a' jest: " << counter << "\n";
}


//Napisz program który bedzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo

void task6()
{
	string password;

		do
		{
			cout << "Podaj has³o\n";
			cin >> password;

			if (password == "abc")
				cout << "Brawo poda³es prawid³owe has³o\n";
			else
				cout << "Jesteœ g³upi xD\n";
		} while (password != "abc");
}

/*
* 
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
*/


//Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")

void task7()
{

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task3();
	//task4(); 
	//task5();
	task6();
}