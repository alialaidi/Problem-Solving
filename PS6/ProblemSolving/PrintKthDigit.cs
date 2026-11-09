namespace ProblemSolving
{
    public class PrintKthDigit
    {
        public int KthDigit(int number, int k)
        {
            if (number <= 0)
            {
                throw new ArgumentException("Number must be a positive integer.");
            }

            if (k <= 0)
            {
                throw new ArgumentException("K must be a positive integer.");
            }

            for (int i = 1; i <= k; i++)
            {
                if (number == 0)
                {
                    throw new ArgumentException(
                        $"The number has less than {k} digits.");
                }

                int digit = number % 10;

                if (i == k)
                {
                    return digit;
                }

                number /= 10;
            }

            throw new InvalidOperationException("Unexpected error.");
        }
    }
}
