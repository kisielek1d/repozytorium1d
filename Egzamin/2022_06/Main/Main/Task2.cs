using System;

namespace Projekt
{
    public class Osoba
    {
        private int id;
        private string imie;
        public static int liczbaInstancji = 0;

        public Osoba()
        {
            id = 0;
            imie = "";
            liczbaInstancji++;
        }

        public Osoba(int id, string imie)
        {
            this.id = id;
            this.imie = imie;
            liczbaInstancji++;
        }

        public Osoba(Osoba innaOsoba)
        {
            this.id = innaOsoba.id;
            this.imie = innaOsoba.imie;
            liczbaInstancji++;
        }

        public void Przywitaj(string argument)
        {
            if (string.IsNullOrEmpty(imie))
                Console.WriteLine("Brak danych");
            else
                Console.WriteLine($"Cześć {argument}, mam na imię {imie}");
        }
    }
}
