namespace Wypozyczalnia
{
    class Film
    {
        private string tytul;
        private int liczbaWypozyczen;

        public Film()
        {
            tytul = "";
            liczbaWypozyczen = 0;
        }

        public void UstawTytul(string nowyTytul)
        {
            if (nowyTytul.Length <= 20)
                tytul = nowyTytul;
            else
                tytul = nowyTytul.Substring(0, 20);
        }

        public string PobierzTytul()
        {
            return tytul;
        }

        public int PobierzLiczbeWypozyczen()
        {
            return liczbaWypozyczen;
        }

        public void Inkrementuj()
        {
            liczbaWypozyczen++;
        }
    }
}