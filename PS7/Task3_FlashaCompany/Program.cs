


using Task3_FlashaCompany.Section_1;
using Task3_FlashaCompany.Section_2;
using Task3_FlashaCompany.Section_3;
using Task3_FlashaCompany.Section_4;

public class Program
{
    public static void Main(string[] args)
    {

        //  ==> Section 1

        // Qusetion 1
        //PersonalInformationCard PIC = new PersonalInformationCard("John Doe", 30, 180, "Single");
        //PIC.DisplayInformation();

        //Question 2
        //Console.WriteLine("Enter the price and quantity for three products:");
        //Console.WriteLine("Enter the price and quantity for the first product:");
        //int productPrice1 = int.Parse(Console.ReadLine());
        //int productQuantity1 = int.Parse(Console.ReadLine());
        //Console.WriteLine("Enter the price and quantity for the second product:");
        //int productPrice2 = int.Parse(Console.ReadLine());
        //int productQuantity2 = int.Parse(Console.ReadLine());
        //Console.WriteLine("Enter the price and quantity for the third product:");
        //int productPrice3 = int.Parse(Console.ReadLine());
        //int productQuantity3 = int.Parse(Console.ReadLine());
        //PurchaseTotal PT = new PurchaseTotal(productPrice1, productQuantity1, productPrice2, productQuantity2, productPrice3, productQuantity3);
        //PT.DisplayTotal();


        // Question 3
        //Console.Write("Enter The Number Of Seconds : ");
        //int Seconds = int.Parse(Console.ReadLine());
        //TimeConverter TC = new TimeConverter(Seconds);
        //TC.PrintTheTimeConverter();


        //Question 4
        //Console.WriteLine("Enter four numbers to calculate the average:");
        //decimal num1 = decimal.TryParse(Console.ReadLine(), out decimal result) ? result : 0;
        //decimal num2 = decimal.TryParse(Console.ReadLine(), out result) ? result : 0;
        //decimal num3 = decimal.TryParse(Console.ReadLine(), out result) ? result : 0;
        //decimal num4 = decimal.TryParse(Console.ReadLine(), out result) ? result : 0;
        //AverageWithValidation AWV = new AverageWithValidation(num1, num2, num3, num4);
        //AWV.DisplayAverage();


        //  ==> Section 2
        //Question 5

        //NumberClassification CN = new NumberClassification();
        //Console.Write("Enter a number to classify:");
        //int Number = int.Parse(Console.ReadLine());
        //CN.ClassifyNumbers(Number);


        //Question 6
        //GradeEvaluation GE = new GradeEvaluation();

        //Console.Write("Enter The Grade Of Student : ");
        //decimal Grade = decimal.Parse(Console.ReadLine());
        //GE.StrudentGrade(Grade);


        // Question 7
        //Console.Write("Enter The Order Value : ");
        //decimal OrderValue = decimal.Parse(Console.ReadLine());

        //Console.Write("Enter The Order Destance : ");
        //decimal OrderDestance = decimal.Parse(Console.ReadLine());
        //DeliveryCost DC = new DeliveryCost(OrderValue, OrderDestance);
        //DC.DisplayDeliveryCost();


        // Question 8
        //Menu_BasedCalculator MB = new Menu_BasedCalculator();

        //Console.Write("Enter The First Number : ");
        //decimal Num1 = decimal.Parse(Console.ReadLine());

        //Console.Write("Enter The Second Number : ");
        //decimal Num2 = decimal.Parse(Console.ReadLine());

        //Console.Write("Enter The Operator : ");
        //char Operator = char.Parse(Console.ReadLine());

        //decimal result = MB.Calculate(Num1, Num2, Operator);

        //Console.WriteLine($"The Final Result Is : {result}");


        //  ==> Section 3

        // Question 9
        //NumberSeries NS = new NumberSeries();
        //Console.Write("Enter The Number Of Terms : ");
        //int n = int.Parse(Console.ReadLine());
        //NS.PrintSeries(n);

        //Question 10

        //MultiplicationTable MT = new MultiplicationTable();
        //Console.Write("Enter The Number : ");
        //int n = int.Parse(Console.ReadLine());
        //Console.Write("Enter The Limit : ");
        //int limit = int.Parse(Console.ReadLine());
        //MT.PrintTable(n, limit);


        // Question 11
        //DigitAnalyzer DA = new DigitAnalyzer();
        //Console.Write("Enter The Number : ");
        //int n = int.Parse(Console.ReadLine());
        //DA.AnalyzeDigits(n);


        // Question 12
        //PrimeNumberTest PM = new PrimeNumberTest();
        //Console.Write("Enter The Number : ");
        //int n = int.Parse(Console.ReadLine());
        //PM.TestPrime(n);

        //Question 13

        //RepeatedInputSummary RS = new RepeatedInputSummary();
        //RS.Operations();



        //  ==> Section 4

        // Question 14
        //NameFormatter NF = new NameFormatter();
        //Console.Write("Enter Your Full Name : ");
        //string fullName = Console.ReadLine();
        //string formattedName = NF.FullName(fullName);
        //Console.WriteLine($"Formatted Name: {formattedName}");
        //Console.WriteLine($"Formatted Name: {formattedName.ToUpper()}");
        //Console.WriteLine($"Formatted Name: {formattedName.ToLower()}");

        // Question 15
        //PalindromeChecker PC = new PalindromeChecker();
        //PC.Operations();

        // Question 16
        //CharacterCounter CC = new CharacterCounter();
        //CC.Operations();

        // Question 17
        //PasswordRuleChecker PRC = new PasswordRuleChecker();
        //PRC.Operations();


        // ==> Section 5

        // Question 18
        //ScoreStatistics SS = new ScoreStatistics();
        //SS.Operations();

        // Question 19
        //SearchForValue SFV = new SearchForValue();
        //SFV.Operations();

        // Question 20
        //UniqueValues UV = new UniqueValues();
        //UV.Operations();

        // Question 21
        //ListManager LM = new ListManager();
        //LM.Operations();


        // ==> Section 6

        // Question 22
        //ReusableCalculations RC = new ReusableCalculations();
        //RC.Operations();

        // Question 23
        //NumberAnalyzer NA = new NumberAnalyzer();
        //NA.Operations();

        // Question 24
        //InputRecovery IR = new InputRecovery();
        //IR.Operations();

        // Question 25
        //StudentResultsConsole SRC = new StudentResultsConsole();
        //SRC.Operations();

    }
}