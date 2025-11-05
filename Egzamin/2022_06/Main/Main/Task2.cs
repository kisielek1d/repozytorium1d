using System;

namespace Projekt
{
    class Program
    {
        static void Main(string[] args)
        {
            Osoba osoba1 = new Osoba();
            Osoba osoba2 = new Osoba(1, "Anna");
            Osoba osoba3 = new Osoba(osoba2);

            osoba1.Przywitaj("Krzysztof");
            osoba2.Przywitaj("Ewa");
            osoba3.Przywitaj("Jan");

            Console.WriteLine($"Liczba instancji: {Osoba.liczbaInstancji}");
        }
    }
}
