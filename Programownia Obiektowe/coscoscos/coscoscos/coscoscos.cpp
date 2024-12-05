// GeometricFiguresConsoleApplication.cpp 

#include <iostream>
#include "Rectangle.h"
#include "square.h"
#include "trapeze.h"
#include "diamond.h"
#include "parallelogram.h"

//Napisz klasy które opisz¹ figury geometryczne: 
// trapez, romb, równoleg³obok, prostok¹t i kwadrat.
// Zdefiniuj podstawowe metody.

int main()
{
    Rectangle rec(6, 4);
    rec.ShowInfo();

    square sqr(6);
    sqr.ShowInfoOne();

    trapeze tra(1, 2, 3, 4, 5);
    tra.ShowInfoTwo();

    diamond dia(2, 5);
    dia.ShowInfoThree();

    parallelogram par(1, 3, 4);
    par.ShowInfoFour();
}