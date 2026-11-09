using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Text;
using System.Threading.Tasks;

namespace ProblemSolving
{
    public class PrimeNumber
    {

        public bool IsPrime(int Num) 
        {
            if (Num <= 1) 
            {
                throw new ArgumentException("Number must be greater than 1.");
            }
            for (int i = 2; i < Num; i++)
            {
                if (Num % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
}
