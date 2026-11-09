using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProblemSolving
{
    public class Factoral
    {
        public int Factorial(int Num)
        {
            if (Num < 0)
            {
                throw new ArgumentException("Number must be non-negative.");
            }
            int i = 1;
            int Result = 1;
            do
            {
                Result *= i;
                i++;

            }while (i <= Num);

            return Result;
        }
    }
}
