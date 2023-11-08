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

/*
* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.
*/

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}
