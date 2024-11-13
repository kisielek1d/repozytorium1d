// StringConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

int main()
{
    string text;
    text = "Ala ma kota";
    cout << "tekst na poczatku: " << text << "\n";
    size_t len = text.length();
    cout << "D³ugosc: " << len << "\n";

    //pierwszy parametr: od ktorego znaku
    //drugi parametr: ile znaków

    string sub = text.substr(4, 2);
    cout << "Pod³añcuch: " << sub << "\n";

    text.replace(0, 3, "Ola");
    cout << "tekst po zmianie: " << text << "\n";

    text.insert(3, " nie");
    cout << "tekst po zmianie: " << text << "\n";
}


