using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_4
{
    public class PasswordRuleChecker
    {
        public void Operations()
        {
            Console.Write("Enter a password: ");
            string password = Console.ReadLine() ?? "";

            bool hasEightCharacters = password.Length >= 8;
            bool hasDigit = false;
            bool hasUppercase = false;

            foreach (char c in password)
            {
                if (char.IsDigit(c))
                {
                    hasDigit = true;
                }

                if (c >= 'A' && c <= 'Z')
                {
                    hasUppercase = true;
                }
            }

            Console.WriteLine($"At least 8 characters: {hasEightCharacters}");
            Console.WriteLine($"Contains a digit: {hasDigit}");
            Console.WriteLine($"Contains an uppercase letter: {hasUppercase}");

            if (hasEightCharacters && hasDigit && hasUppercase)
            {
                Console.WriteLine("Password is valid.");
            }
            else
            {
                Console.WriteLine("Password is invalid.");
            }
        }
    }
}
