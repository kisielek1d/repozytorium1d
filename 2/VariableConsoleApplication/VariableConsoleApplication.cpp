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

//Stwórz program, który pobiera od u¿ytkownika
//d³ugoœæ w metrach i przelicza j¹ na centymetry
//milimetry i kilometry. Wyœwietl wynik.
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
//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.

void task3()
{
	std::cout << "Podaj d³ugoœæ boku prostok¹ta A \n";
	float a;
	std::cin >> a;
	std::cout << "Podaj d³ugoœæ boku prostok¹ta B \n";
	float b;
	std::cin >> b;
	float areaOfRectangle;
	areaOfRectangle = a * b;
	std::cout << "Pole prostok¹ta wynosi: " << areaOfRectangle << "\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.

void task4()
{
	std::cout << "Podaj d³ugoœæ podstawy trójk¹ta. \n";
	float base;
	std::cin >> base;
	std::cout << "Podaj wysokoœæ trójk¹ta. \n";
	float height;
	std::cin >> height;
	float areaOfTriangle;
	areaOfTriangle = (base * height) / 2;
	std::cout << "Pole trójk¹ta wynosi: " << areaOfTriangle << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.

void task5()
{
	std::cout << "Podaj promien ko³a: \n";
	float radius;
	std::cin >> radius;
	float areaOfCircle;
	areaOfCircle = 3.14 * radius * radius;
	std::cout << "Pole ko³a wynosi: " << areaOfCircle << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

void task6()
{
	std::cout << "Podaj d³ugoœæ podstawy a: \n";
	float sideA;
	std::cin >> sideA;
	std::cout << "Podaj d³ugoœæ podstawy b: \n";
	float sideB;
	std::cin >> sideB;
	std::cout << "Podaj d³ugoœæ wysokoœci: \n";
	float height;
	std::cin >> height;
	float areaOfTrapeze;
	areaOfTrapeze = ( sideA = sideB ) * height /2;
	std::cout << "Pole trapezu wynosi: " << areaOfTrapeze << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

void task7()
{
	std::cout << "Podaj d³ugoœæ krawedzi. \n";
	float edge;
	std::cin >> edge;
	float areaOfCube;
	areaOfCube = edge * edge * edge;
	std::cout << "Pole szeœcianu wynosi: " << areaOfCube << "\n"; \
}

//Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

void task8()
{
	std::cout << "Podaj temperature w stopniach Celsjusza: \n";
	float tempC;
	std::cin >> tempC;
	float tempF;
	tempF = tempC * 9 / 5 + 32;
	std::cout << "Temperatura w farenhajtach wynosi: " << tempF << "\n";

}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

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
	std::cout << "Œrednia arytmetyczna wynosi: " << mean << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

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
	std::cout << "Œrednia arytmetyczna wynosi: " <<  mean << "\n";
}

//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

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

//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inna, korzystaj¹c z okreœlonego kursu wymiany.

void task12()
{
	std::cout << "Podaj kwote w z³otówkach \n";
	float zloty;
	std::cin >> zloty;
	float euro;
	euro = zloty / 4.42;
	std::cout << "Kwota w euro wynosi: " << euro << "\n";
	float pound;
	pound = zloty / 5.07;
	std::cout << "Kwota w funtach wynosi: " << pound << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

void task13()
{
	std::cout << " Podaj iloœæ sekund: \n";
	float sec;
	std::cin >> sec;
	float hour;
	float minute;
	hour = sec / 3600;
		minute = sec / 60;
	std::cout << "Godzin " << hour << "\n";
	std::cout << "Minut " << minute << "\n";

}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

void task14()
{
	std::cout << "Podaj 1 liczbe ca³kowit¹: \n";
	float numberA;
	std::cin >> numberA;
	std::cout << "Podaj 2 liczbe ca³kowit¹ \n";
	float numberB;
	std::cin >> numberB;
	float additionResult, subtractionResult, multiplicationResult, divisionResult;
	additionResult = numberA + numberB;
	std::cout << "Wynik dodawania: " << additionResult << "\n";
	subtractionResult = numberA - numberB;
	std::cout << "Wynik Odejmowania: " << subtractionResult << "\n";
	multiplicationResult = numberA * numberB;
	std::cout << "Wynik Mno¿enia: " << multiplicationResult << "\n";
	divisionResult = numberA / numberB;
	std::cout << "Wynik Dzielenia: " << divisionResult << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.

void task15()
{
	float x1, x2, y1, y2;
	std::cout << "Podaj wspó³rzêdne punktów x1, y1: \n";
	std::cin >> x1 >> y1;
	std::cout << "Podaj wspó³rzêdne x2, y2: \n";
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
