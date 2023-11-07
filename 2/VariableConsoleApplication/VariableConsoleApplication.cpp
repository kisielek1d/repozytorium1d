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
    std::cout << "Podaj d³ugoœæ w metrach \n";
    std::cin >> LengthInMeterFromUser;

    float LengthInCentimeter;
        LengthInCentimeter = LengthInMeterFromUser / 100;

        float LenghtInMilimeter;
        LenghtInMilimeter = LengthInCentimeter / 10;

    float LenghtInKilometer;
        LenghtInKilometer = LengthInMeterFromUser * 1000;

}

int main()
{
    //task1();
    task2();
}
