using System;

class Program
{
    static void Main()
    {
        Console.Write("Butun sonni kiriting: ");
        int number = int.Parse(Console.ReadLine());

        int tensDigit = (number / 10) % 10;

        int unitsDigit = number % 10;

        int swappedNumber = (number - tensDigit * 10 + unitsDigit * 10) + (tensDigit - unitsDigit);

        Console.WriteLine("O'zgartirilgan son: " + swappedNumber);
    }
}
