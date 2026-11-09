using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProblemSolving
{
    public class LargestPrimeFactor
    {

       PrimeNumber primeNumber = new PrimeNumber();

       public int GetLargestPrimeFactor(int number)
       {
           if (number <= 1)
           {
                throw new ArgumentException("Number must be greater than 1.");
           }

            int max = 0;

           for (int i = 2; i <= number; i++)
           {
                  if (number % i == 0 && primeNumber.IsPrime(i))
                  {
                        max = i;
                  }
           }

           return max;
       }

    }
}
