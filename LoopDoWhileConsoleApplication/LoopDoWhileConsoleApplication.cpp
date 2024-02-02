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

int main()
{
    setlocale(LC_CTYPE, "polish");

    task1();
}
