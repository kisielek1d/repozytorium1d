// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task1()
{
	short ageFromUser;
	std::cout << "Podaj swoj wiek, \n";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

//Stwórz program, który pobiera od u¿ytkownika
//d³ugoœæ w metrach i przelicza j¹ na centymetry
//milimetry i kilometry. Wyœwietl wynik.
void task2()
{
	float LengthInMeterFromUser;
	std::cout << "Podaj dlugosc w metrach \n";
	std::cin >> LengthInMeterFromUser;

	float LengthInCentimeter;
	LengthInCentimeter = LengthInMeterFromUser * 100;
	std::cout << "Dlugosc w centymetrach wynosi: " << LengthInCentimeter << " cm. \n";

	float LenghtInMilimeter;
	LenghtInMilimeter = LengthInCentimeter * 10;
	std::cout << "Dlugosc w milimetrach wynosi : " << LenghtInMilimeter << " mm. \n";

	float LenghtInKilometer;
	LenghtInKilometer = LengthInMeterFromUser / 1000;
	std::cout << "Dlugosc w kilometrach wynosi: " << LenghtInKilometer << "km. \n";

}

int main()
{
	//task1();
	task2();
}
