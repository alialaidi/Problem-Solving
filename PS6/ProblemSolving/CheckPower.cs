using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProblemSolving
{
    public class CheckPower
    {
        public string CheckIsPower(int a,int b)
        {
            if (a>0 && b>1)
            {   
                    while (a > 1)
                    {
                        if (a % b != 0)
                        {
                            return "No";
                        }

                        a /= b;
                    }

                    return "Yes";
            }
            return "No";
        }
    }
}
