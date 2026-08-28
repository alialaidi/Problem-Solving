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

int PrintNumberInReversed(int Number)
{
    int remainder = 0;
    int Number2 = 0;
    do
    {
        remainder = Number % 10;
        Number /= 10;
        Number2 = Number2 * 10 + remainder;
        
    } while (Number > 0);
    return Number2;
}
void PrintResult(int Number)
{
    cout << PrintNumberInReversed(Number);
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    PrintResult(Number);
    return 0;
}
