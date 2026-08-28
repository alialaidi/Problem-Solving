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

void ReversedInOrder(int Number)
{
    int remainder = 0;
    do
    {
        remainder = Number % 10;
        Number /= 10;
        cout << remainder<<endl;
        
    } while (Number > 0);
}
void PrintResult(int Number)
{
    ReversedInOrder(Number);
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");
    PrintResult(Number);
    return 0;
}
