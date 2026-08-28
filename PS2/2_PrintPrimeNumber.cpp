//this code for Print Prime Number By using two Methode, Enum and Bool//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum EnPrimeNotPrime{prime=1,NotPrime};
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
EnPrimeNotPrime CheckPrimeNumber(int Number)
{
    int M = floor(Number / 2);
    if (Number <= 1)
    {
            return EnPrimeNotPrime::NotPrime;
    }
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return EnPrimeNotPrime::NotPrime;
    }
    return EnPrimeNotPrime::prime;
}
bool isPrime(int number)
{
    int M = floor(number / 2);
    if (number <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= M; ++i)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void PrintPrimeByBool(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
void PrintPrimeByEnum(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrimeNumber(i)==EnPrimeNotPrime::prime)
        {
            cout << i << " ";
        }
    }
}

int main() {

    int Number = ReadPositiveNumber("Plaede enter Positive Number?");
    cout << "Prime Number by using Boolian is:    ";
    PrintPrimeByBool(Number);
    cout << "\nprime Number by using Enum is:       ";
    PrintPrimeByEnum(Number);
    return 0;
}


