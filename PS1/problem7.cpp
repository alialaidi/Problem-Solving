#include <iostream>

using namespace std;

int ReadNumber()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    return number;
}

float CalculateHalfNumber(int Num)
{
    return (float)Num / 2;
}

void PrintResults(int Num)
{
    string result = "The Half Of "+ to_string(Num) + " Is  = "+to_string(CalculateHalfNumber(Num));
    cout << endl<<result<<endl;
}

int main ()
{
    PrintResults(ReadNumber());
    return 0;
}