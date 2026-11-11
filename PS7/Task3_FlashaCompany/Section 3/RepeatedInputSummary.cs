using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_3
{

    public class RepeatedInputSummary
    {
        public void Operations()
        {
            int sum = 0;
            int count = 0;
            int min = 0;
            int max = 0;

            while (true)
            {
                Console.Write("Enter a number (Q to quit): ");
                string? input = Console.ReadLine();

                if (input?.Trim().ToUpper() == "Q")
                {
                    break;
                }

                if (!int.TryParse(input, out int number))
                {
                    Console.WriteLine("Invalid input!");
                    continue;
                }

                if (count == 0)
                {
                    min = number;
                    max = number;
                }
                else
                {
                    if (number > max)
                        max = number;

                    if (number < min)
                        min = number;
                }

                sum += number;
                count++;
            }

            Console.WriteLine($"Sum = {sum}");
            Console.WriteLine($"Count = {count}");

            if (count == 0)
            {
                Console.WriteLine("No numbers were entered.");
            }
            else
            {
                Console.WriteLine($"Max = {max}");
                Console.WriteLine($"Min = {min}");
            }
        }
    }

}
