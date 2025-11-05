using System;

/********************************************
klasa:     Film
opis:      Klasa reprezentuje film dostępny w wypożyczalni. 
           Przechowuje jego tytuł oraz liczbę wypożyczeń. 
           Umożliwia ustawienie tytułu (z ograniczeniem długości),
           pobieranie informacji o filmie oraz zwiększanie liczby wypożyczeń.
pola:      tytul – przechowuje tytuł filmu
           liczbaWypozyczen – przechowuje liczbę wypożyczeń danego filmu
autor:     Filip Ciesielski
********************************************/



namespace Wypozyczalnia
{
    class Program
    {
        static void Main(string[] args)
        {
            Film film = new Film();

            Console.WriteLine("=== Test klasy Film ===\n");

            film.UstawTytul("Matrix");
            Console.WriteLine($"Tytuł filmu: {film.PobierzTytul()}");
            Console.WriteLine($"Liczba wypożyczeń: {film.PobierzLiczbeWypozyczen()}");

            film.UstawTytul("Incepcja");
            Console.WriteLine($"\nNowy tytuł: {film.PobierzTytul()}");

            film.Inkrementuj();
            film.Inkrementuj();
            Console.WriteLine($"Liczba wypożyczeń po 2 inkrementacjach: {film.PobierzLiczbeWypozyczen()}");
        }
    }
}