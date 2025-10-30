using System;
class Program
{
    static void Main()
    {
        Film f1 = new Film();

        Console.WriteLine("Początkowe dane filmu:");
        Console.WriteLine($"Tytuł: {f1.GetTytul()}");
        Console.WriteLine($"Liczba wypożyczeń: {f1.GetLiczbaWypozyczen()}");
        Console.WriteLine();

        f1.SetTytul("Matrix");
        Console.WriteLine("Po ustawieniu tytułu:");
        Console.WriteLine($"Tytuł: {f1.GetTytul()}");
        Console.WriteLine();

        Console.WriteLine("Test inkrementacji liczby wypożyczeń:");
        Console.WriteLine($"Przed: {f1.GetLiczbaWypozyczen()}");
        f1.InkrementujWypozyczenia();
        f1.InkrementujWypozyczenia();
        Console.WriteLine($"Po: {f1.GetLiczbaWypozyczen()}");
    }
}