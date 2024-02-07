// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
    /*
    int number;
    std::cout << "Podaj liczbę dodatnią\n";
    std::cin >> number;

    if (number < 0)
    {
        std::cout << "Podaj liczbę dodatnią\n";
        std::cin >> number;
        if (number < 0)
        {
            std::cout << "Podaj liczbę dodatnią\n";
            std::cin >> number;

        }
            if (number < 0)
            {
               std::cout << "Podaj liczbę dodatnią\n";
               std::cin >> number;
            }
                 if (number < 0)
                 {
                     std::cout << "Podaj liczbę dodatnią\n";
                     std::cin >> number;

                 }
    }
    */
    int number;

    do
    {
        std::cout << "Podaj liczbę dodatnią\n"; 
        std::cin >> number;
    } while (number < 0);

    std::cout << "Podano liczbę " << number << "\n";
}

void task2()
{
    int randomNumber, numberFromUser;

    srand(time(0));
    randomNumber = rand() % 100;

   // std::cout << "Liczba losowa " << randomNumber << "\n";

    do
    {
        std::cout << "Podaj liczbę\n";
        std::cin >> numberFromUser;
        if (numberFromUser > randomNumber)
            std::cout << "Liczba jest za duzą\n";
        if (numberFromUser < randomNumber)
            std::cout << "Liczba jest za mała\n";
    } while (numberFromUser != randomNumber);

    /* {
        std::cout << "Podaj liczbę: ";
        std::cin >> numberFromUser;

        if (numberFromUser = randomNumber)
        {

            std::cout << "Podaj liczbę: ";
            std::cin >> numberFromUser;

            if (numberFromUser = randomNumber)
            {
                //...
            }
        }
    }
    */
    std::cout << "Gratulacje, zgadłeś liczbe\n";
}

//Napisz program który wyświetli liczby całkowite z przedziału <0, x) (wartosc x podaje użytkownik)
void task3()
{
    int upperRange;
    std::cout << "Podaj górny zakres: \n";
    std::cin >> upperRange;

    std::cout << "0, ";
    if (upperRange >= 1)
    {
        std::cout << "1, ";

        if (upperRange >= 2)
        {
            std::cout << "2, ";

            if (upperRange >= 2)
            {
                std::cout << "3, ";
            }
        }
    }
    



}

int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    task3();
}