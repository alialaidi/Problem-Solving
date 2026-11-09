using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProblemSolving
{
    public class LCMandGCD
    {
        public int GCD(int a, int b)
        {
            int Max = 0;
            for (int i = 1; i <= a && i<=b; i++)
            {
                if (a % i == 0 && b % i == 0)
                {
                    if (i > Max)
                    {
                        Max = i;
                    }
                }
            }
            return Max;
        }

        public int LCM(int a, int b)
        {
            return (a * b) / GCD(a, b);
        }


    }
}
