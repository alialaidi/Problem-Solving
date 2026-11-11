using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_3
{
    public class DigitAnalyzer
    {
        public void AnalyzeDigits(int number)
        {
            int sum = 0;
            int count = 0;
            int digit = 0;
            while (number > 0)
            {
                digit = number % 10;
                sum += digit;
                count++;
                number /= 10;
            }
            Console.WriteLine($"Sum of digits: {sum}");
            Console.WriteLine($"Count of digits: {count}");
        }
    }
}
