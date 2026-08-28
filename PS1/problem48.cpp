#include <iostream>
#include <string>

using namespace std;

float ReadPositiveValue(string Message )
{
    float Number;
    do
    {
        cout << Message;
        cin >> Number; 
    } while (Number <= 0 );


    return Number;
}

float TotalInstallmentAmount(float LeanAmount,float HowManyMounths)
{
    return LeanAmount/HowManyMounths;
}

int main()
{
    float LeanAmount,HowManyMounths;
    LeanAmount = ReadPositiveValue("Enter Lean Amount : ");
    HowManyMounths = ReadPositiveValue("Enter How Many Mounths You Want : ");
    cout << "Total Installment Amount = " << TotalInstallmentAmount(LeanAmount,HowManyMounths)<< endl;
        return 0;
}

