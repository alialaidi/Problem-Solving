using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_6
{
    public class StudentResultsConsole
    {
        private List<string> names = new List<string>();
        private List<double> scores = new List<double>();

        public void Operations()
        {
            while (true)
            {
                Console.WriteLine("\n--- Student Results ---");
                Console.WriteLine("1. Add Student");
                Console.WriteLine("2. List Students");
                Console.WriteLine("3. Search Student");
                Console.WriteLine("4. Show Statistics");
                Console.WriteLine("5. Exit");
                Console.Write("Choose an option: ");

                string choice = Console.ReadLine() ?? "";

                if (choice == "1")
                    AddStudent();
                else if (choice == "2")
                    ListStudents();
                else if (choice == "3")
                    SearchStudent();
                else if (choice == "4")
                    ShowStatistics();
                else if (choice == "5")
                {
                    Console.WriteLine("Goodbye!");
                    break;
                }
                else
                    Console.WriteLine("Invalid option.");
            }
        }

        private void AddStudent()
        {
            Console.Write("Enter student name: ");
            string name = (Console.ReadLine() ?? "").Trim();

            while (string.IsNullOrWhiteSpace(name))
            {
                Console.Write("Name cannot be empty. Try again: ");
                name = (Console.ReadLine() ?? "").Trim();
            }

            double score;

            Console.Write("Enter score (0-100): ");

            while (!double.TryParse(Console.ReadLine(), out score)
                   || double.IsNaN(score)
                   || score < 0 || score > 100)
            {
                Console.Write("Invalid score. Enter 0-100: ");
            }

            names.Add(name);
            scores.Add(score);

            Console.WriteLine("Student added successfully.");
        }

        private void ListStudents()
        {
            if (names.Count == 0)
            {
                Console.WriteLine("No students available.");
                return;
            }

            for (int i = 0; i < names.Count; i++)
            {
                Console.WriteLine($"{i + 1}. {names[i]} - {scores[i]}");
            }
        }

        private void SearchStudent()
        {
            if (names.Count == 0)
            {
                Console.WriteLine("No students available.");
                return;
            }

            Console.Write("Enter student name: ");
            string search = (Console.ReadLine() ?? "").Trim();

            if (string.IsNullOrWhiteSpace(search))
            {
                Console.WriteLine("Name cannot be empty.");
                return;
            }

            bool found = false;

            for (int i = 0; i < names.Count; i++)
            {
                if (string.Equals(names[i], search,
                    StringComparison.OrdinalIgnoreCase))
                {
                    Console.WriteLine($"Name: {names[i]}, Score: {scores[i]}");
                    found = true;
                }
            }

            if (!found)
            {
                Console.WriteLine("Student not found.");
            }
        }

        private void ShowStatistics()
        {
            if (scores.Count == 0)
            {
                Console.WriteLine("No students available.");
                return;
            }

            double sum = 0;
            double highest = scores[0];

            for (int i = 0; i < scores.Count; i++)
            {
                sum += scores[i];

                if (scores[i] > highest)
                {
                    highest = scores[i];
                }
            }

            double average = sum / scores.Count;

            Console.WriteLine($"Average Score = {average:F2}");
            Console.WriteLine($"Highest Score = {highest}");
        }
    }
}
