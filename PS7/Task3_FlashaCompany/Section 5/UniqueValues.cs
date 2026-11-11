using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_5
{
    public class UniqueValues
    {

        public void Operations()
        {
            List<int> numbers = new List<int>();
            List<int> uniqueNumbers = new List<int>();

            Console.Write("How many numbers? ");

            if (!int.TryParse(Console.ReadLine(), out int count)
                || count < 0)
            {
                Console.WriteLine("Invalid count.");
                return;
            }

            for (int i = 0; i < count; i++)
            {
                Console.Write($"Enter number {i + 1}: ");

                int number;
                while (!int.TryParse(Console.ReadLine(), out number))
                {
                    Console.Write("Enter a valid integer: ");
                }

                numbers.Add(number);
            }

            foreach (int number in numbers)
            {
                if (!uniqueNumbers.Contains(number))
                {
                    uniqueNumbers.Add(number);
                }
            }

            Console.WriteLine("Unique Values:");

            foreach (int number in uniqueNumbers)
            {
                Console.Write(number + " ");
            }

            Console.WriteLine();
        }
    }
}
