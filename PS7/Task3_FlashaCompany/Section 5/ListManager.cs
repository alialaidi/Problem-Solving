using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_5
{
    public class ListManager
    {
        public void Operations()
        {
            List<int> numbers = new List<int>();

            while (true)
            {
                Console.WriteLine("\n--- List Manager ---");
                Console.WriteLine("1. Add Number");
                Console.WriteLine("2. Remove Number");
                Console.WriteLine("3. List Numbers");
                Console.WriteLine("4. Exit");
                Console.Write("Choose an option: ");

                if (!int.TryParse(Console.ReadLine(), out int choice))
                {
                    Console.WriteLine("Invalid option.");
                    continue;
                }

                if (choice == 1)
                {
                    Console.Write("Enter a number: ");

                    if (int.TryParse(Console.ReadLine(), out int number))
                    {
                        numbers.Add(number);
                        Console.WriteLine("Number added.");
                    }
                    else
                    {
                        Console.WriteLine("Invalid number.");
                    }
                }
                else if (choice == 2)
                {
                    if (numbers.Count == 0)
                    {
                        Console.WriteLine("The list is empty.");
                        continue;
                    }

                    Console.Write("Enter a number to remove: ");

                    if (int.TryParse(Console.ReadLine(), out int number))
                    {
                        if (numbers.Remove(number))
                        {
                            Console.WriteLine("Number removed.");
                        }
                        else
                        {
                            Console.WriteLine("Number not found.");
                        }
                    }
                    else
                    {
                        Console.WriteLine("Invalid number.");
                    }
                }
                else if (choice == 3)
                {
                    if (numbers.Count == 0)
                    {
                        Console.WriteLine("The list is empty.");
                    }
                    else
                    {
                        Console.WriteLine("Current Numbers:");

                        foreach (int number in numbers)
                        {
                            Console.WriteLine(number);
                        }
                    }
                }
                else if (choice == 4)
                {
                    Console.WriteLine("Goodbye!");
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option.");
                }
            }
        }
}
