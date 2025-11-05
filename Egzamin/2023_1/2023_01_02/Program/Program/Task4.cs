namespace NotatkiApp
{
    class Notatka
    {
        private static int licznikNotatek = 0;
        private int id;
        protected string tytul;
        protected string tresc;

        public Notatka(string tytul, string tresc)
        {
            licznikNotatek++;
            id = licznikNotatek;
            this.tytul = tytul;
            this.tresc = tresc;
        }

        public void WyswietlNotatke()
        {
            System.Console.WriteLine($"Tytuł: {tytul}");
            System.Console.WriteLine($"Treść: {tresc}");
        }

        public void Diagnostyka()
        {
            System.Console.WriteLine($"ID: {id}; Licznik: {licznikNotatek}; Tytuł: {tytul}; Treść: {tresc}");
        }
    }
}
