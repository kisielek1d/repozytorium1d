#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::string fileName = "liczby.txt";
    std::ifstream file(fileName);

    std::vector<int> numbers
    int num;


    while (file) >> liczba) {
        liczby.push_back(num);
    }

    file.close();

    std::cout << "Liczby odczytane z pliku (od ty³u): " << std::endl;


    for (int i = numbers.size() - 1; i >= 0; i--) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}
