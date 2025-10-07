
using ObjectConsoleApp;

PointStruct pointStruct;
pointStruct.x = 5;
pointStruct.y = 10;

Console.WriteLine($"Punkt ma ({pointStruct.x}, {pointStruct.y}) ");

PointStruct secondPointStruct = pointStruct;
secondPointStruct.y = 20;

Console.WriteLine($"Pierwszy punkt ma ({pointStruct.x}, {pointStruct.y}) ");
Console.WriteLine($"Drugi punkt ma ({secondPointStruct.x}, {secondPointStruct.y}) ");
