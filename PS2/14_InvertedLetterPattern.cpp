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

void InvertedLetterPattern(int Number)
{
    int Letter = 65;
    for (int i = (Letter+Number)-1; i >= Letter; i--)
    {
        for (int a = 65; a <= i; a++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    InvertedLetterPattern(Number);
    return 0;
}
