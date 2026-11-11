using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_1
{
    public class TimeConverter
    {
        private int Seconds;
        public TimeConverter(int seconds)
        {
            if (seconds < 0)
            {
                throw new ArgumentException(
                    "Seconds cannot be negative.");
            }
            this.Seconds = seconds;
        }

        int hours => this.Seconds / 3600;
        int remining => this.Seconds % 3600;
        int minutes => this.remining / 60;
        int seconds => remining % 60;

        public void PrintTheTimeConverter() 
        {
            Console.WriteLine(($"Hours: {hours}"));
            Console.WriteLine(($"Minutes: {minutes}"));
            Console.WriteLine(($"Seconds: {seconds}"));
        }

    }
}
