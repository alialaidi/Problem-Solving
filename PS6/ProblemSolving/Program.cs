
using ProblemSolving;

public class Program  
{
    public static void Main(string[] args)
    {
        CheckPower checkPower = new CheckPower();

        int a = 3125;
        int b = 5;

        Console.WriteLine($"Is {a} a power of {b}? {checkPower.CheckIsPower(a, b)}");
    }
}



