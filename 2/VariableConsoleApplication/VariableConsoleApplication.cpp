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

//Stw�rz program, kt�ry pobiera od u�ytkownika
//d�ugo�� w metrach i przelicza j� na centymetry
//milimetry i kilometry. Wy�wietl wynik.
void task2()
{
    float LengthInMeterFromUser;
    std::cout << "Podaj d�ugo�� w metrach \n";
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
