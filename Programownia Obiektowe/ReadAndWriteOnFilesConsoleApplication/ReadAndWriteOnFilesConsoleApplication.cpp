#include <iostream>
#include <fstream>
using namespace std;

void task1()
{
	string name;
	int age;

	cout << "Podaj imiê\n";
	cin >> name;

	cout << "Podaj wiek\n";
	cin >> age;

	ofstream writeInFile;
	writeInFile.open("c:\\dane.txt");

	if (writeInFile.is_open() == true)
	{
		writeInFile << name;
		writeInFile << "\n";
		writeInFile << age;

		writeInFile.close();
	}
	else
		cout << "B³¹d otwarcia pliku\n";
}

int main()
{
	task1();
}