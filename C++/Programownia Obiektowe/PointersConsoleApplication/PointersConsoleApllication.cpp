#include <iostream>
using namespace std;

int main()
{
	int firstVar = 5;
	int secondVar = 9;
	
	cout << "firstVar = " << firstVar << "\n";
	cout << "firstVar = " << (& firstVar) << "\n";
	cout << "secondVar = " << secondVar << "\n";
	cout << "adres zmiennej secondVar = " << (&secondVar) << "\n";

	int *ptr = &firstVar;

	cout << "ptr = " << ptr << "\n";
	cout << "ptr = " << *ptr << "\n";
	*ptr = 99;
	cout << "firstVar = " << firstVar << "\n";

	bool thirdVar = true;

	bool* boolPtr;

	int tab[3] = { 2, 98, 4 };
	cout << "tab[0] = " << tab[0] << "\n";
	cout << "tab[0] = " << *tab << "\n";
	cout << "tab[0] = " << *(tab + 0) << "\n";
	cout << "tab[1] = " << tab[1] << "\n";
	cout << "tab[1] = " << *(tab + 1) << "\n";
	cout << "tab[2] = " << tab[2] << "\n";
	cout << "tab[2] = " << *(tab + 2) << "\n";

	cout << "Zawartosc tablicy: " << "\n";
	
}