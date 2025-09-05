#include "square.h"

square::square (double a)
{
	sideA = a;
}

void square::ShowInfoOne()
{
	std::cout << "Informacja o kwadracie:\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Obwód = " << GetPerimeterOne() << "\n";
	std::cout << "Pole = " << GetAreaOne() << "\n\n";
}

double square::GetPerimeterOne()
{
	return 4 * sideA;
}

double square::GetAreaOne()
{
	return sideA * sideA;
}