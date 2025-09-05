#pragma once
#include <iostream>

class parallelogram
{
private:
	double sideA, sideB, heightH;
protected:

public:

	parallelogram(double a, double b, double h);

	void ShowInfoFour();
	double GetPerimeterFour();
	double GetAreaFour();
};
