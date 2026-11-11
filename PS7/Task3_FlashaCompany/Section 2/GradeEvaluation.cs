using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_2
{
    public class GradeEvaluation
    {
        public void StrudentGrade(decimal Number) 
        {
            switch (Number)
            {
                case > 90 and <= 100:
                    Console.WriteLine(" Pass , Grade A");
                    return;

                case > 80 and <= 90:
                    Console.WriteLine("Pass , Grade B");
                    return;

                case > 70 and <= 80:
                    Console.WriteLine("Pass , Grade C");
                    return;

                case > 60 and <= 70:
                    Console.WriteLine("Pass , Grade D");
                    return;

                case >= 0 and <= 60:
                    Console.WriteLine("Fail , Grade F");
                    return;

            }
        }
    }
}
