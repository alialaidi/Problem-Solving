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

float TotalMounths(float LeanAmount,float MounthlyInstallment)
{
    return LeanAmount/MounthlyInstallment;
}

int main()
{
    float LeanAmount,MounthlyInstallment;
    LeanAmount = ReadPositiveValue("Enter Lean Amount: ");
    MounthlyInstallment = ReadPositiveValue("Enter Mounthly Installment: ");
    cout << "Total Mounths: " << TotalMounths(LeanAmount,MounthlyInstallment)<<" Mounths" << endl;
        return 0;
}