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

void NumberPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        for (int a = 1; a <= i; a++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    NumberPattern(Number);
    return 0;
}
