#include "trapeze.h"

trapeze::trapeze(double a, double b, double c, double d, double h)
{
    sideA = a;
    sideB = b;
    sideC = c;
    sideD = d;
    heightH = h;
}

void trapeze::ShowInfoTwo()
{
    std::cout << "Informacja o trapezie:\n";
    std::cout << "Bok A = " << sideA << "\n";
    std::cout << "Bok B = " << sideB << "\n";
    std::cout << "Bok C = " << sideC << "\n";
    std::cout << "Bok D = " << sideD << "\n";
    std::cout << "Wysokość H = " << heightH << "\n";
    std::cout << "Obwód = " << GetPerimeterTwo() << "\n";
    std::cout << "Pole = " << GetAreaTwo() << "\n\n";
}

double trapeze::GetPerimeterTwo()
{
    return sideA + sideB + sideC + sideD;
}

double trapeze::GetAreaTwo()
{
    return (sideA + sideB) / 2 * heightH;
}
