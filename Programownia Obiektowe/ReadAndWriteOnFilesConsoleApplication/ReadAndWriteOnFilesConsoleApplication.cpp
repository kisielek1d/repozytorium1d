#include <iostream>
#include <fstream>
using namespace std;

void task1()
{
	string name;
	int age;

	cout << "Podaj imi�\n";
	cin >> name;

	cout << "Podaj wiek\n";
	cin >> age;

	ofstream writeInFile;
	writeInFile.open("c:\\dane.txt", ios::app);

	if (writeInFile.is_open() == true)
	{
		writeInFile << name;
		writeInFile << "\n";
		writeInFile.flush(); 
		writeInFile << age;
		writeInFile << "\n";

		writeInFile.close();
	}
	else
		cout << "B��d otwarcia pliku\n";
}

void task2()
{
	string name;
	int age;
	ifstream readFromFile;
	readFromFile.open("c:\\dane.txt");
	if (readFromFile.is_open())
	{
		readFromFile >> name;
		readFromFile >> age;
		cout << "Imi�: " << name << " wiek: " << age << "\n";

		readFromFile.close();
	}

}

int main()
{
	task1();
}