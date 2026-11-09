namespace ProblemSolving
{
    public class SumofDigitsPalindrome
    {
            public int Sum(int nums)
            {
                int sum = 0;
                while (nums > 0)
                {
                    sum += nums % 10;
                    nums /= 10;
                }
                return sum;
            }


            public bool IsPalindrome(int Number)
            {
                if (Number == 0)
                {
                    return true;
                }
                if (Number > 0)
                {
                    return Reverse(Number) == Number;
                }
                return false;
            }

            public int Reverse(int Number)
            {
                int remNum = 0;
                int revNum = 0;
                while (Number > 0)
                {
                    remNum = Number % 10;
                    Number = Number / 10;
                    revNum = (revNum * 10) + remNum;
                }
                return revNum;
            }
        
    }
}
