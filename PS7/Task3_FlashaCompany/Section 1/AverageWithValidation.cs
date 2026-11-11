using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_1
{
    public class AverageWithValidation
    {
        decimal[] nums = new decimal[4];

        public AverageWithValidation(decimal num1, decimal num2, decimal num3, decimal num4 )
        {
            nums[0] = num1;
            nums[1] = num2;
            nums[2] = num3;
            nums[3] = num4;
        }

        public void DisplayAverage()
        {
            decimal sum = 0;
            foreach (decimal num in nums)
            {
                sum += num;
            }
            decimal average = sum / nums.Length;
            Console.WriteLine($"The average of the four numbers is: {average}");
        }


    }
}
