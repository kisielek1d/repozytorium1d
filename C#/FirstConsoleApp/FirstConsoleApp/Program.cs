// See https://aka.ms/new-console-template for more information
Console.Write("Hello, World! \n");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Witaj" + " " +  surname + " " + name + "tutaj!!!!");
Console.WriteLine("Witaj {0} {1} tutaj!!!!", surname, name);
Console.WriteLine($"Witaj {surname} {name} tutaj!!!!");

Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber = 6;
Console.WriteLine($"firstNumber = {firstNumber}");
Console.WriteLine($"secondNumber = {secondNumber}");

//---------------------------------------------------------------------------------

void ParameterTest_v1()
{
    Console.WriteLine($"Przed zmianą ParameterTest_v1 {firstNumber}");
}

firstNumber = 99;
Console.WriteLine($"Przed ParameterTest_v1 {firstNumber}");
ParameterTest_v1(firstNumber);
Console.WriteLine($"Przed ParameterTest_v1 {firstNumber}");