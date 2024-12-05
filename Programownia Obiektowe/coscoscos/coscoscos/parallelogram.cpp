#include "parallelogram.h"

parallelogram::parallelogram(double a, double b, double h)
{
	sideA = a;
	sideB = b;
	heightH = h;
}

void parallelogram::ShowInfoFour()
{
	std::cout << "Informacja o prostok�cie:\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Bok B = " << sideB << "\n";
	std::cout << "Wysokość H = " << heightH << "\n";
	std::cout << "Obwód = " << GetPerimeterFour() << "\n";
	std::cout << "Pole = " << GetAreaFour() << "\n\n";
}

double parallelogram::GetPerimeterFour()
{
	return 2 * sideA + 2 * sideB;
}

double parallelogram::GetAreaFour()
{
	return sideA * heightH;
}