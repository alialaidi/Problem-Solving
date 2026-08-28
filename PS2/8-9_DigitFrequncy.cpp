#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Text)
{
    int Number = 0;
    do
    {
        cout << Text << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CountDigitFrequency(int Number,short int Digit)
{
    int remainder = 0;
    short int sum = 0;
    do
    {
        remainder = Number % 10;
        Number /= 10;
        if (remainder == Digit)
        {
            sum++;
       }
        
    } while (Number > 0);
    return sum;
}
void PrintResult(int Number)
{
    for(int i=1;i<=9;i++)
    {
        short int DigitFrequency = CountDigitFrequency(Number, i);
        if (DigitFrequency >= 1)
            cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s)\n";
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    PrintResult(Number);
    return 0;
}
