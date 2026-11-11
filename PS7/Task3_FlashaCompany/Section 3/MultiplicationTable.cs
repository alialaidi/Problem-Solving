using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_3
{
    public class MultiplicationTable
    {
        public void PrintTable(int n,int limit)
        {
            Console.WriteLine($"Multiplication Table for {n}:");
            for (int i = 1; i <= limit; i++)
            {
                Console.WriteLine($"{n} x {i} = {n * i}");
            }
        }
    }
}
