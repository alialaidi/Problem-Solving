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

int SumOfDigit(int Number)
{
    int remainder = 0;
    int sum = 0;
    do
    {
        remainder = Number % 10;
        Number /= 10;
        sum += remainder;
        
    } while (Number > 0);
    return sum;
}
void PrintResult(int Number)
{
    cout << "Sum of Digit= " << SumOfDigit(Number);
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    PrintResult(Number);
    return 0;
}
