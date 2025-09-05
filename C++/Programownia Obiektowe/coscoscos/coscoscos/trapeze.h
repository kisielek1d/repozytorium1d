#pragma once
#include <iostream>

class trapeze
{
private:
	double sideA, sideB, sideC, sideD, heightH;
protected:

public:

	trapeze(double a, double b, double c, double d, double h);

	void ShowInfoTwo();
	double GetPerimeterTwo();
	double GetAreaTwo();
};