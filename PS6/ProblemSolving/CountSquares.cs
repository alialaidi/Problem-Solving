using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProblemSolving
{
    public class CountSquares
    {
        public int CountPerfectSquares(int n)
        {
            if (n <= 0)
            {
                throw new ArgumentException("Input must be a non-negative integer.");
            }

            int count = 0;
            for (int i = 1; (long)i * i <= n; i++)
            {
                //if (i*i <= n)
                //{
                //    count++;
                //}
                count++;
            }
            return count;
        }
    }
}
