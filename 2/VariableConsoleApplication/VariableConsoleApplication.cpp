// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task1()
{
	short ageFromUser;
	std::cout << "Podaj swoj wiek, \n";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

//Stw�rz program, kt�ry pobiera od u�ytkownika
//d�ugo�� w metrach i przelicza j� na centymetry
//milimetry i kilometry. Wy�wietl wynik.
void task2()
{
	float LengthInMeterFromUser;
	std::cout << "Podaj dlugosc w metrach \n";
	std::cin >> LengthInMeterFromUser;

	float LengthInCentimeter;
	LengthInCentimeter = LengthInMeterFromUser * 100;
	std::cout << "Dlugosc w centymetrach wynosi: " << LengthInCentimeter << " cm. \n";

	float LenghtInMilimeter;
	LenghtInMilimeter = LengthInCentimeter * 10;
	std::cout << "Dlugosc w milimetrach wynosi : " << LenghtInMilimeter << " mm. \n";

	float LenghtInKilometer;
	LenghtInKilometer = LengthInMeterFromUser / 1000;
	std::cout << "Dlugosc w kilometrach wynosi: " << LenghtInKilometer << "km. \n";

}
//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.

void task3()
{
	std::cout << "Podaj d�ugo�� boku prostok�ta A \n";
	float a;
	std::cin >> a;
	std::cout << "Podaj d�ugo�� boku prostok�ta B \n";
	float b;
	std::cin >> b;
	float areaOfRectangle;
	areaOfRectangle = a * b;
	std::cout << "Pole prostok�ta wynosi: " << areaOfRectangle << "\n";
}
//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.

void task4()
{
	std::cout << "Podaj d�ugo�� podstawy tr�jk�ta. \n";
	float base;
	std::cin >> base;
	std::cout << "Podaj wysoko�� tr�jk�ta. \n";
	float height;
	std::cin >> height;
	float areaOfTriangle;
	areaOfTriangle = (base * height) / 2;
	std::cout << "Pole tr�jk�ta wynosi: " << areaOfTriangle << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.

void task5()
{
	std::cout << "Podaj promien ko�a: \n";
	float radius;
	std::cin >> radius;
	float areaOfCircle;
	areaOfCircle = 3.14 * radius * radius;
	std::cout << "Pole ko�a wynosi: " << areaOfCircle << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.

void task6()
{
	std::cout << "Podaj d�ugo�� podstawy a: \n";
	float sideA;
	std::cin >> sideA;
	std::cout << "Podaj d�ugo�� podstawy b: \n";
	float sideB;
	std::cin >> sideB;
	std::cout << "Podaj d�ugo�� wysoko�ci: \n";
	float height;
	std::cin >> height;
	float areaOfTrapeze;
	areaOfTrapeze = ( sideA = sideB ) * height /2;
	std::cout << "Pole trapezu wynosi: " << areaOfTrapeze << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.

void task7()
{
	std::cout << "Podaj d�ugo�� krawedzi. \n";
	float edge;
	std::cin >> edge;
	float areaOfCube;
	areaOfCube = edge * edge * edge;
	std::cout << "Pole sze�cianu wynosi: " << areaOfCube << "\n"; \
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

void task8()
{
	std::cout << "Podaj temperature w stopniach Celsjusza: \n";
	float tempC;
	std::cin >> tempC;
	float tempF;
	tempF = tempC * 9 / 5 + 32;
	std::cout << "Temperatura w farenhajtach wynosi: " << tempF << "\n";

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

void task9()
{
	std::cout << "Podaj 1 liczbe \n";
	float numberA;
	std::cin >> numberA;
	std::cout << "Podaj 2 liczbe \n";
	float numberB;
	std::cin >> numberB;
	float mean;
	mean = (numberA + numberB) / 2;
	std::cout << "�rednia arytmetyczna wynosi: " << mean << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

void task10()
{
	std::cout << "Podaj 1 liczbe \n";
	float numberA;
	std::cin >> numberA;
	std::cout << "Podaj 2 liczbe \n";
	float numberB;
	std::cin >> numberB;
	std::cout << "Podaj 3 liczbe \n";
	float numberC;
	std::cin >> numberC;
	float mean;
	mean = (numberA + numberB + numberC) / 3;
	std::cout << "�rednia arytmetyczna wynosi: " <<  mean << "\n";
}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task11()
{
	std::cout << "Podaj 1 liczbe \n";
	float w1;
	std::cin >> w1;
	std::cout << "Podaj 2 liczbe \n";
	float w2;
	std::cin >> w2;
	std::cout << "Podaj 3 liczbe \n";
	float w3;
	std::cin >> w3;
}

//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inna, korzystaj�c z okre�lonego kursu wymiany.

void task12()
{
	std::cout << "Podaj kwote w z�ot�wkach \n";
	float zloty;
	std::cin >> zloty;
	float euro;
	euro = zloty / 4.42;
	std::cout << "Kwota w euro wynosi: " << euro << "\n";
	float pound;
	pound = zloty / 5.07;
	std::cout << "Kwota w funtach wynosi: " << pound << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

void task13()
{
	std::cout << " Podaj ilo�� sekund: \n";
	float sec;
	std::cin >> sec;
	float hour;
	float minute;
	hour = sec / 3600;
		minute = sec / 60;
	std::cout << "Godzin " << hour << "\n";
	std::cout << "Minut " << minute << "\n";

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

void task14()
{
	std::cout << "Podaj 1 liczbe ca�kowit�: \n";
	float numberA;
	std::cin >> numberA;
	std::cout << "Podaj 2 liczbe ca�kowit� \n";
	float numberB;
	std::cin >> numberB;
	float additionResult, subtractionResult, multiplicationResult, divisionResult;
	additionResult = numberA + numberB;
	std::cout << "Wynik dodawania: " << additionResult << "\n";
	subtractionResult = numberA - numberB;
	std::cout << "Wynik Odejmowania: " << subtractionResult << "\n";
	multiplicationResult = numberA * numberB;
	std::cout << "Wynik Mno�enia: " << multiplicationResult << "\n";
	divisionResult = numberA / numberB;
	std::cout << "Wynik Dzielenia: " << divisionResult << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.

void task15()
{
	float x1, x2, y1, y2;
	std::cout << "Podaj wsp�rz�dne punkt�w x1, y1: \n";
	std::cin >> x1 >> y1;
	std::cout << "Podaj wsp�rz�dne x2, y2: \n";
	std::cin >> x2 >> y2;
	float distanceOne;
	distanceOne = sqrt(pow(x1 - y1, 2));
	std::cout << "Dystans pomiedzy x1,y1: " << distanceOne << "\n";
	float distanceTwo;
	distanceTwo = sqrt(pow(x2 - y2, 2));
	std::cout << "Dystans pomiedzy x2,y2: " << distanceTwo << "\n";

}



int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	task15();
}
