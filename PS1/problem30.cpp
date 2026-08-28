#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message<<" : ";
        cin >> Number;
    } while (Number < 0);
    
    return Number;
}

int Factorial(int n)
{
    int Factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        Factorial *= i;
    }

    return Factorial;
}

int main()
{
    cout << Factorial(ReadPositiveNumber("Please Enter Positive Number ")) << endl;
    return 0;
}
