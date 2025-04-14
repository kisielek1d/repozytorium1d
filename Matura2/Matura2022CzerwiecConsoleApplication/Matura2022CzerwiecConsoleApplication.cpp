#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int odwrotnaLiczba(int num) {
    int odwrtonyNum = 0;
    while (num != 0) {
        odwrtonyNum = odwrtonyNum * 10 + (num % 10);
        num /= 10;
    }
    return odwrtonyNum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

vector<int> odczytajLiczbyZPliku(const string& filename) {
    ifstream file(filename);
    vector<int> liczby;
    int n;
    while (file >> n) {
        liczby.push_back(n);
    }
    return liczby;
}

int main() {
    vector<int> liczby = odczytajLiczbyZPliku("liczby.txt");

    ofstream wynik("wyniki4.txt");
    //Odbicia, które sa podzielne przez 17
    wynik << "Zad 4.1:";
    for (int num : liczby) {
        int odwrtona = odwrotnaLiczba(num);
        if (odwrtona % 17 == 0) {
            wynik << " " << odwrtona << ",";
        }
    }

    int maxDiff = 0, maxNum = 0;
    //
    wynik << "\nZad 4.2:";
    for (int num : liczby) {
        int odwrtona = odwrotnaLiczba(num);
        int diff = abs(num - odwrtona);
        if (diff > maxDiff) {
            maxDiff = diff;
            maxNum = num;
        }
    }
    wynik << " " << maxNum << " " << maxDiff;
    //Liczby pierwsze
    wynik << "\nZad 4.3:";
    for (int num : liczby) {
        int odwrtona = odwrotnaLiczba(num);
        if (isPrime(num) && isPrime(odwrtona)) {
            wynik << " " << num << ",";
        }
    }

    map<int, int> counter;
    for (int num : liczby) {
        counter[num]++;
    }
    int countDifferent = counter.size(), countTwo = 0, countThree = 0;
    for (auto& entry : counter) {
        if (entry.second == 2) countTwo++;
        if (entry.second == 3) countThree++;
    }
    //
    wynik << "\nZad 4.4: " << countDifferent << " " << countTwo << " " << countThree;

    return 0;
}
