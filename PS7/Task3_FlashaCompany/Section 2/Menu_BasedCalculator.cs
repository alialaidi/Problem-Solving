using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_2
{
    public class Menu_BasedCalculator
    {
        public decimal Calculate(decimal Num1, decimal Num2, char Operator)
        {
            switch (Operator)
            {
                case '+':
                    return (Num1 + Num2);
                case '-':
                    return (Num1 - Num2);
                case '*':
                    return (Num1 * Num2);
                case '/':
                    return (Num1 / Num2);
                default:
                    Console.WriteLine("Enter The Right Operator!");
                    return -1;
            }
        }
    }

    
}
