using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_3
{
    public class PrimeNumberTest
    {
        public void TestPrime(int n)
        {
            if (n <= 1)
            {
                Console.WriteLine($"{n} is not a prime number.");
                return;
            }
            for (int i = 2; i <= Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    Console.WriteLine($"{n} is not a prime number.");
                    return;
                }
            }
            Console.WriteLine($"{n} is a prime number.");
        }
    }
}
