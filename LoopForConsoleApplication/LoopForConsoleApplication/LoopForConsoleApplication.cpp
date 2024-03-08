// LoopForConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

void task1()
{
    int number;
    std::cout << "Podaj liczbe dodatnia \n";
    std::cin >> number;
    /*
    int counter = 0;
    while (counter != number)
    {
        std::cout << "Hello World \n";
        counter++;
    }
    */

    int counter = 0;
    for(int counter = 0; counter != number; counter++;)
    {
        std::cout << "Hello World \n";
        counter++;
    }
}
}

void task2()
{

}

int main()
{
    task1();
}

