using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_4
{
    public class CharacterCounter
    {
        public void Operations()
        {
            Console.Write("Enter a sentence: ");
            string sentence = Console.ReadLine() ?? "";

            int vowels = 0;
            int consonants = 0;
            int digits = 0;
            int spaces = 0;
            int others = 0;

            foreach (char c in sentence)
            {
                char ch = char.ToLower(c);

                if (ch >= 'a' && ch <= 'z')
                {
                    if (ch == 'a' || ch == 'e' || ch == 'i'
                        || ch == 'o' || ch == 'u')
                    {
                        vowels++;
                    }
                    else
                    {
                        consonants++;
                    }
                }
                else if (char.IsDigit(c))
                {
                    digits++;
                }
                else if (c == ' ')
                {
                    spaces++;
                }
                else
                {
                    others++;
                }
            }

            Console.WriteLine($"Vowels = {vowels}");
            Console.WriteLine($"Consonants = {consonants}");
            Console.WriteLine($"Digits = {digits}");
            Console.WriteLine($"Spaces = {spaces}");
            Console.WriteLine($"Other Characters = {others}");
        }
    }
}
