using System;


public class Film
{
    private string tytul;
    private int liczbaWypozyczen;

    public Film()
    {
        tytul = "";
        liczbaWypozyczen = 0;
    }

    public void SetTytul(string nowyTytul)
    {
        if (nowyTytul.Length > 20)
            tytul = nowyTytul.Substring(0, 20);
        else
            tytul = nowyTytul;
    }

    public string GetTytul()
    {
        return tytul;
    }

    public int GetLiczbaWypozyczen()
    {
        return liczbaWypozyczen;
    }

    public void InkrementujWypozyczenia()
    {
        liczbaWypozyczen++;
    }
}