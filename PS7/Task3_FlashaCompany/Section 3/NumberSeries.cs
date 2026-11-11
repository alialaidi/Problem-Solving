using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_3
{
    public class NumberSeries
    {
        public void PrintSeries(int n)
        {
            if (n < 0)
            {
                Console.WriteLine("The Number Should be a Positive!");
            }
            int sum = 0;
            Console.WriteLine("The series is:");
            for (int i = 1; i <= n; i++)
            {
                Console.Write(i + " ");
                sum += i;
            }
            Console.WriteLine();
            Console.WriteLine($"The sum of the series is: {sum}");
        }
    }
}
