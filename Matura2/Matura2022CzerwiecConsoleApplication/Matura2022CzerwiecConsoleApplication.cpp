#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream file("przyklad.txt");
    vector<int> numbers;

    int n;
    while (file >> n)
    {
        numbers.push_back(n);
    }
    
    cout << "zad 4.1:\n";
    for (int num : numbers)
    {
        int reversedNum = 0;
        int tempNum = num;

        do
        {
            reversedNum = reversedNum * 10;
            reversedNum = reversedNum + (tempNum % 10);
            tempNum = tempNum / 10;
        } while (tempNum != 0);
        if (reversedNum % 17 == 0)
        {
            cout << reversedNum << ", ";
        }
    }
    cout << "\nzad 4.2:\n";
    int max = 0;
    int maxNum = 0;
    for (int num : numbers)
    {
        int reversedNum = 0;
        int tempNum = num;
        int n = 0;

        do
        {
            reversedNum = reversedNum * 10;
            reversedNum = reversedNum + (tempNum % 10);
            tempNum = tempNum / 10;
        } while (tempNum != 0);
        tempNum = num;

        n = num - reversedNum;
        if (n < 0)
        {
            n = n * -1;
        }
        if (n > max)
        {
            max = n;
            maxNum = num;
        }
    }
    cout << maxNum << ", " << max;
    cout << "\nzad 4.3:\n";

    for (int num : numbers)
    {
        int reversedNum = 0;
        int tempNum = num;

        do
        {
            reversedNum = reversedNum * 10;
            reversedNum = reversedNum + (tempNum % 10);
            tempNum = tempNum / 10;
        } while (tempNum != 0);

        bool isPrime = true;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0 || reversedNum % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            cout << num << ", ";
        }
    }
    int counter[10000];
    for (int i = 0; i < 10000; i++)
    {
        counter[i] = 0;
    }
    cout << "\nzad 4.4:\n";
    for (int num : numbers)
    {
        for (int i = 0; i < 10000; i++)
        {
            if (i == num)
            {
                counter[i]++;
            }
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        if (counter[i] != 0)
        {
            cout << i << " ,";
        }
    }
    cout << "\n";
    for (int i = 0; i < 10000; i++)
    {
        if (counter[i] == 2)
        {
            cout << i << " ,";
        }
    }
}