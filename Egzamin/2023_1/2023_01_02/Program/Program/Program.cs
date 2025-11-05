using System;

/********************************************
klasa:     Notatka
opis:      Klasa reprezentuje pojedynczą notatkę zawierającą tytuł i treść.
pola:      licznikNotatek – przechowuje liczbę utworzonych notatek (pole statyczne)
           id – identyfikator notatki (nadawany automatycznie)
           tytul – przechowuje tytuł notatki
           tresc – przechowuje treść notatki
autor:     Filip Ciesielski
********************************************/


namespace NotatkiApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("=== Aplikacja do obsługi notatek ===\n");

            Notatka notatka1 = new Notatka("Zakupy", "Kupić mleko, chleb i ser.");
            Notatka notatka2 = new Notatka("Spotkanie", "Spotkanie o 14:00 w sali konferencyjnej.");

            Console.WriteLine("\n--- Wyświetlanie notatek ---");
            notatka1.WyswietlNotatke();
            Console.WriteLine();
            notatka2.WyswietlNotatke();

            Console.WriteLine("\n--- Diagnostyka ---");
            notatka1.Diagnostyka();
            notatka2.Diagnostyka();
        }
    }
}