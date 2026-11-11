using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_5
{
    public class ScoreStatistics
    {
        public void Operations()
        {
            int[] scores = new int[6];

            int sum = 0;
            int passingCount = 0;

            for (int i = 0; i < scores.Length; i++)
            {
                Console.Write($"Enter score {i + 1}: ");

                while (!int.TryParse(Console.ReadLine(), out scores[i])
                       || scores[i] < 0 || scores[i] > 100)
                {
                    Console.Write("Enter a valid score (0-100): ");
                }
            }

            int min = scores[0];
            int max = scores[0];

            for (int i = 0; i < scores.Length; i++)
            {
                sum += scores[i];

                if (scores[i] < min)
                {
                    min = scores[i];
                }

                if (scores[i] > max)
                {
                    max = scores[i];
                }

                if (scores[i] >= 50)
                {
                    passingCount++;
                }
            }

            double average = (double)sum / scores.Length;

            Console.WriteLine($"Average = {average:F2}");
            Console.WriteLine($"Minimum = {min}");
            Console.WriteLine($"Maximum = {max}");
            Console.WriteLine($"Passing Scores = {passingCount}");
        }
    }
}
