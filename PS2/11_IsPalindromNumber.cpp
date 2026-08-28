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
int NumberInReversed(int Number)
{
    int remainder = 0;
    int Number2 = 0;
    while (Number > 0)
    {
        remainder = Number % 10;
        Number /= 10;
        Number2 = Number2 * 10 + remainder;

    } 
    return Number2;
}
bool isPalindromeNumber(int Number)
{
    return NumberInReversed(Number) == Number;
}
void PrintResult(int Number)
{
    if (isPalindromeNumber(Number))
    {
        cout << "Yes, it's Palindrome Number\n";
    }
    else
        cout << "No, it's not Palindrome Number\n";
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    PrintResult(Number);
    return 0;
}
