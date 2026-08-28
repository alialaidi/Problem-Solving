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

bool PerfectNumber(int Number)
{
    int M = floor(Number / 2);
    int sum = 0;
    for (int i = 1; i <= M; i++)
    {
        if (Number % i == 0)
            sum+=i;
    }
    return sum == Number;
}

void PrintPerfectNumber(int Number)
{
    cout << "The Perfect Numbers up to " << Number << " are:\n";
    for (int i = 1; i <= Number; i++)
    {
        if (PerfectNumber(i))
            cout << i << endl;
    }
    cout << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    PrintPerfectNumber(Number);
    return 0;
}
