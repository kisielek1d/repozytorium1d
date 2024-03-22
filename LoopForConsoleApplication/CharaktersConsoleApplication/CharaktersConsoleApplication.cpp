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

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();

}