using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_5
{
    public class SearchForValue
    {
        public void Operations()
        {
            int[] numbers = { 10, 20, 30, 20, 40, 50 };

            Console.Write("Enter a number to search: ");

            if (!int.TryParse(Console.ReadLine(), out int target))
            {
                Console.WriteLine("Invalid number.");
                return;
            }

            int position = -1;

            for (int i = 0; i < numbers.Length; i++)
            {
                if (numbers[i] == target)
                {
                    position = i;
                    break;
                }
            }

            if (position != -1)
            {
                Console.WriteLine("Value found.");
                Console.WriteLine($"First index = {position}");
                Console.WriteLine($"Position = {position + 1}");
            }
            else
            {
                Console.WriteLine("Value not found.");
            }
        }
    }
}
