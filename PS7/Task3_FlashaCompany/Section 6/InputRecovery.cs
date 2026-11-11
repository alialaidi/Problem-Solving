using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_6
{
    public class InputRecovery
    {
        public void Operations()
        {
            int number = ReadInteger();

            if (number < 0)
            {
                Console.WriteLine("Factorial is not defined for negative numbers.");
                return;
            }

            BigInteger result = CalculateFactorial(number);

            Console.WriteLine($"Factorial of {number} = {result}");
        }

        public int ReadInteger()
        {
            int number;

            while (true)
            {
                Console.Write("Enter an integer: ");

                if (int.TryParse(Console.ReadLine(), out number))
                {
                    return number;
                }

                Console.WriteLine("Invalid input. Please try again.");
            }
        }

        public BigInteger CalculateFactorial(int number)
        {
            BigInteger result = 1;

            for (int i = 2; i <= number; i++)
            {
                result *= i;
            }

            return result;
        }
    }
}
