using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_6
{
    public class ReusableCalculations
    {
        public void Operations()
        {
            while (true)
            {
                Console.WriteLine("\n--- Calculations Menu ---");
                Console.WriteLine("1. Rectangle Area");
                Console.WriteLine("2. Celsius to Fahrenheit");
                Console.WriteLine("3. Larger Number");
                Console.WriteLine("4. Exit");
                Console.Write("Choose an option: ");

                string choice = Console.ReadLine() ?? "";

                if (choice == "4")
                    break;

                if (choice == "1")
                {
                    double length = ReadNumber("Enter length: ");
                    double width = ReadNumber("Enter width: ");

                    if (length < 0 || width < 0)
                    {
                        Console.WriteLine("Dimensions cannot be negative.");
                        continue;
                    }

                    Console.WriteLine($"Area = {RectangleArea(length, width)}");
                }
                else if (choice == "2")
                {
                    double celsius = ReadNumber("Enter Celsius: ");
                    Console.WriteLine($"Fahrenheit = {ToFahrenheit(celsius):F2}");
                }
                else if (choice == "3")
                {
                    double first = ReadNumber("Enter first number: ");
                    double second = ReadNumber("Enter second number: ");

                    Console.WriteLine($"Larger = {LargerNumber(first, second)}");
                }
                else
                {
                    Console.WriteLine("Invalid option.");
                }
            }
        }

        public double RectangleArea(double length, double width)
        {
            return length * width;
        }

        public double ToFahrenheit(double celsius)
        {
            return (celsius * 9 / 5) + 32;
        }

        public double LargerNumber(double a, double b)
        {
            return a > b ? a : b;
        }

        private double ReadNumber(string message)
        {
            double number;
            Console.Write(message);

            while (!double.TryParse(Console.ReadLine(), out number)
                   || double.IsNaN(number) || double.IsInfinity(number))
            {
                Console.Write("Enter a valid number: ");
            }

            return number;
        }
    }
}
