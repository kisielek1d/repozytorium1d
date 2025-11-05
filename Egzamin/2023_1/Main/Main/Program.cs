using NWD;
using System;


/*
    nazwa funkcji: Liczenie NWD
    opis funkcji: funkcja oblicza najwiekszy wspólny dzielnik
    parametry:
    1. Pierwsza liczba
    2. Druga liczba 

    zwracany typ i opis: najwiekszy wspolny dzielnik dwóch liczb 
    autor: Filip Ciesielski

 */
namespace Main
{
    class Program
    {
        static void Main()
        {
            int a, b;

            Console.Write("Podaj a: ");
            while (!int.TryParse(Console.ReadLine(), out a))
            {
                Console.WriteLine("Błąd! Podaj poprawną liczbę całkowitą dla a.");
                Console.Write("Podaj a: ");
            }

            Console.Write("Podaj b: ");
            while (!int.TryParse(Console.ReadLine(), out b))
            {
                Console.WriteLine("Błąd! Podaj poprawną liczbę całkowitą dla b.");
                Console.Write("Podaj b: ");
            }

            NwdCalculator kalkulator = new NwdCalculator();

            int wynik = kalkulator.LiczNwd(a, b);

            Console.WriteLine("NWD = " + wynik);
        }
    }
}
