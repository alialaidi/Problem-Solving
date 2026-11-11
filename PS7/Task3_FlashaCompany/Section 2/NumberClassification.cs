using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_2
{
    public class NumberClassification
    {
        public void ClassifyNumbers(int number)
        {
            if (number > 0)
            {
                if (number % 2 == 0)
                {
                    Console.WriteLine("Positive Even");
                }
                else
                {
                    Console.WriteLine("Positive Odd");
                }
            }
            else if (number == 0)
            {
                Console.WriteLine("Zero Even");
            }
            else
            {
                if (Math.Abs(number) % 2 == 0)
                {
                    Console.WriteLine("Negative Even");
                }
                else
                {
                    Console.WriteLine("Negative Odd");
                }
            }


        }
    }
}
