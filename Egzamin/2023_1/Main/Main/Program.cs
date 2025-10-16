using NWD;
using System;

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
