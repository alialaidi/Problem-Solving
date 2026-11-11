using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_6
{
    public class NumberAnalyzer
    {
        public void Operations()
        {
            Console.Write("Enter an integer: ");

            if (!int.TryParse(Console.ReadLine(), out int number))
            {
                Console.WriteLine("Invalid integer.");
                return;
            }

            Console.WriteLine($"Sign: {CheckSign(number)}");
            Console.WriteLine($"Type: {(IsEven(number) ? "Even" : "Odd")}");
            Console.WriteLine($"Prime: {(IsPrime(number) ? "Prime" : "Not Prime")}");
        }

        public string CheckSign(int number)
        {
            if (number > 0)
                return "Positive";

            if (number < 0)
                return "Negative";

            return "Zero";
        }

        public bool IsEven(int number)
        {
            return number % 2 == 0;
        }

        public bool IsPrime(int number)
        {
            if (number < 2)
                return false;

            for (int i = 2; i <= number / i; i++)
            {
                if (number % i == 0)
                    return false;
            }

            return true;
        }
    }
}
