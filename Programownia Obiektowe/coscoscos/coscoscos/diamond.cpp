#include "diamond.h"

diamond::diamond(double a, double h)
{
	sideA = a;
	heightH = h;
}

void diamond::ShowInfoThree()
{
	std::cout << "Informacja o romb:\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Wysokość H = " << heightH << "\n";
	std::cout << "Obwód = " << GetPerimeterThree() << "\n";
	std::cout << "Pole = " << GetAreaThree() << "\n\n";
}

double diamond::GetPerimeterThree()
{
	return 4 * sideA;
}

double diamond::GetAreaThree()
{
	return sideA * heightH;
}