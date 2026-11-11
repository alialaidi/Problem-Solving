using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_4
{
    public class PalindromeChecker
    {
        public void Operations()
        {
            Console.Write("Enter a word: ");
            string word = Console.ReadLine() ?? "";

            word = word.ToLower();

            bool isPalindrome = true;

            for (int i = 0; i < word.Length / 2; i++)
            {
                if (word[i] != word[word.Length - 1 - i])
                {
                    isPalindrome = false;
                    break;
                }
            }

            if (isPalindrome)
            {
                Console.WriteLine("The word is a palindrome.");
            }
            else
            {
                Console.WriteLine("The word is not a palindrome.");
            }
        }
    }
}
