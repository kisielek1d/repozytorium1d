#include <iostream>

/*
*
*
*
*

*

*
*
*
*
*
* 
* 
* 
* 
* 
*
*/

//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.
void task1()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj 1 liczbę \n";
	std::cin >> firstNumber;

	std::cout << "Podaj 2 liczbę \n";
	std::cin >> secondNumber;

	if (secondNumber == firstNumber)
		std::cout << "Liczby są równe ";
	else
		std::cout << "Liczby nie są równe ";
}

// Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona parzysta.Wyświetl odpowiedni komunikat.
void task2()
{
	int number;
	std::cout << "Podaj liczbę\n";
	std::cin >> number;

	int rest = number % 2;

	if (rest == 0)
		std::cout << "Liczba jest parzysta";
	else
		std::cout << "Liczba nie jest parzysta";
}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
void task3()
{
	int number;
	std::cout << "Podaj liczbę ";
	std::cin >> number;

	int rest1 = number % 3;

	if (rest1 == 0)
		std::cout << "Liczba jest podzielna przez 3""\n";
	else
		std::cout << "Liczba nie jest podzielna przez 3""\n";
	int rest2 = number % 5;

	if (rest2 == 0)
		std::cout << "Liczba jest podzielna przez 5""\n";
	else
		std::cout << "Liczba nie jest podzielna przez 5""\n";
}

/* Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
BMI = masa / wzrost ^ 2
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną
*/
void task4()
{
	double weight, height, bmi;
	std::cout << "Podaj swój wzrost (w m) ";
	std::cin >> height;
	std::cout << "Podaj swoją wage (w kg) ";
	std::cin >> weight;

	bmi = weight / (height * height);

	std::cout << "\n";
	std::cout << "Twoje BMI wynosi: " << bmi << "\n";

	if (bmi <= 16)
	{
		std::cout << "Wygłodzenie";
	}
	else
	{
		if (bmi >= 16 && bmi < 16.99)
		{
			std::cout << "Wychudzenie";
		}
		else
		{
			if (bmi >= 17 && bmi < 18.49)
			{
				std::cout << "Niedowaga";
			}
			else
			{
				if (bmi >= 18.5 && bmi < 24.99)
				{
					std::cout << "Waga prawidłowa";
				}
				else
				{
					if (bmi >= 25 && bmi < 29.9)
					{
						std::cout << "Nadwaga";
					}
					else
					{
						if (bmi >= 30 && bmi < 34.99)
						{
							std::cout << "I stopień nadwagi";
						}
						else
						{
							if (bmi >= 35 && bmi < 39.9)
							{
								std::cout << "II stopień nadwagi";
							}
							else
							{
								if (bmi >= 40)
								{
									std::cout << "III stopień nadwagi";
								}
							}

						}
					}
				}
			}
		}
	}
}


//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
void task5()
{
	int dayOfWeek;

	std::cout << "Podaj dzień tygodnia (1-7) \n";
	std::cin >> dayOfWeek;

	if (dayOfWeek == 1)
		std::cout << "Poniedziałek";
	else
		if (dayOfWeek == 2)
			std::cout << "Wtorek";
		else
			if (dayOfWeek == 3)
				std::cout << "Środa";
			else
				if (dayOfWeek == 4)
					std::cout << "Czwartek";
				else
					if (dayOfWeek == 5)
						std::cout << "Piątek";
					else
						if (dayOfWeek == 6)
							std::cout << "Sobota";
						else
							if (dayOfWeek == 7)
								std::cout << "Niedziela";


	switch (dayOfWeek)
	{
	case 1:
		std::cout << "Poniedziałek";
			break;
	case 2:
		std::cout << "Wtorek";
		break;
	case 3:
		std::cout << "Środa";
		break;
	case 4:
		std::cout << "Czwartek";
		break;
	case 5:
		std::cout << "Piątek";
		break;
	case 6:
		std::cout << "Sobota";
		break;
	case 7:
		std::cout << "Niedziela";
		break;

	}
}

//Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
void task6()
{
	float monthOfYear;

	std::cout << "Podaj numer miesiąca (1-12) \n";
	std::cin >> monthOfYear;

	if (monthOfYear == 1)
		std::cout << "Styczeń";
	else
		if (monthOfYear == 2)
			std::cout << "Luty";
		else
			if (monthOfYear == 3)
				std::cout << "Marzec";
			else
				if (monthOfYear == 4)
					std::cout << "Kwiecień";
				else
					if (monthOfYear == 5)
						std::cout << "Maj";
					else
						if (monthOfYear == 6)
							std::cout << "Czerwiec";
						else
							if (monthOfYear == 7)
								std::cout << "Lipiec";
							else
								if (monthOfYear == 8)
									std::cout << "Sierpień";
								else
									if (monthOfYear == 9)
										std::cout << "Wrzesień";
									else
										if (monthOfYear == 10)
											std::cout << "Październik";
										else
											if (monthOfYear == 11)
												std::cout << "Listopad";
											else
												if (monthOfYear == 12)
													std::cout << "Grodzień";
}

//Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny. Wyświetl odpowiedni komunikat.
void task7()
{
	int year;

	std::cout << "Podaj rok\n";
	std::cin >> year;

	int rest = year % 4;

	if (rest == 0)
		std::cout << "Rok jest przestępny";
	else
		std::cout << "Rok nie jest przestępny";
}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.
void task8()
{
	int number;

	std::cout << "Podaj liczbe całkowitą : ";
	std::cin >> number;

	int result = (number < 0)  - number / number;
	std::cout << "Wartość bezwzględna: " << result << "\n";
}

//Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.
void task9()
{
	float ageOfUser;

	std::cout << "Podaj swój wiek: ";
	std::cin >> ageOfUser;

	if (ageOfUser >= 18)
		std::cout << "Jesteś pełnioletni/a";
	else
		std::cout << "Nie jesteś pełnioletni/a";
}

// Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt.Wyświetl odpowiedni komunikat.
void task10()
{
	float sideA, sideB, sideC;

	std::cout << "Podaj długość 1 ramienia ";
	std::cin >> sideA;
	std::cout << "Podaj długość 2 ramienia ";
	std::cin >> sideB;
	std::cout << "Podaj długość podstawy ";
	std::cin >> sideC;

	if (sideA+sideB >= sideC)
		std::cout << "Może powstać trójkąt :D";
	else
		std::cout << "Nie może XD";
}

// Program wyświetlający odpowiedni komunikat w zależności od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task11()
{
	float usersMark;

	std::cout << "Podaj ocene (1-6) \n";
	std::cin >> usersMark;

	if (usersMark == 1)
		std::cout << "Niedostateczny";
	else
		if (usersMark == 2)
			std::cout << "Dopuszczający";
		else
			if (usersMark == 3)
				std::cout << "Dostateczny";
			else
				if (usersMark == 4)
					std::cout << "Dobry";
				else
					if (usersMark == 5)
						std::cout << "Bardzo Dobry";
					else
						if (usersMark == 6)
							std::cout << "Celujący";
}

//Napisz program, który poprosi użytkownika o podanie oceny w skali 100-punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.
void task12()
{
	float number, result;

	std::cout << "Podaj liczbe w skali 0-100 \n";
	std::cin >> number;

	if (number >= 0 && number <= 100)
	{
		result = number;
		std::cout << "Ocena prostentowa: " << result << "%\n";
	}
	else
	{
		std::cout << "Podana ocena nie znajduje sie w przedziale";
	}
}

void task13()
{
	int day, month;

	std::cout << "Podaj dzień miesiąca (1-31)\n";
	std::cin >> day;

	std::cout << "Podaj miesiąc (1-12)";
	std::cin >> month;

	if (month >= 1 && month <= 12)
	{
		if (day >= 1 && day <= 31)
		{
			std::cout << "Podana data jest prawidłowa \n";
		}
		else
		{
			std::cout << "Podany dzień jest nieprawidłowy\n";
		}
	}
	else
	{
		std::cout << "Podany miesiąc jest nieprawidłowy\n";
	}
}


//Napisz program, który na podstawie współczynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.
void task14()
{
	double a, b, c;
	
	std::cout << "Podaj wpółczynniki równania kwadratowego(a, b, c): ";
	std::cin >> a >> b >> c;

	double delta = b * b - 4 * a * c;
	
	if (delta >= 0)
	{
		double x1 = (-b + sqrt(delta)) / (2 * a);
	}
}



void task15()
{ 
	int number;
	std::cout << "Podaj liczbe dodatnią\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba to " << number << "\n";
	else
	{
		std::cout << "Podałeś liczbe ujemną, podaj liczbę jeszcze raz ";
		std::cin >> number;


		if (number > 0)
			std::cout << "Podana liczba to " << number << "\n";
		else
		{
			std::cout << "Podałeś liczbe ujemną, podaj liczbę jeszcze raz ";
			std::cin >> number;
		}
	}
	

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
