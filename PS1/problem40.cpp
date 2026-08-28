#include <iostream>
#include <cmath>

using namespace std;

float ReadPositiveValue(string Message)
{
    float TotalBill;
    do
    {
        cout << Message;
        cin >> TotalBill; 
    } while (TotalBill <= 0 );


    return TotalBill;
}

float CalculateBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main ()
{
    float TotalBill;
    TotalBill = ReadPositiveValue("Enter the total bill : ");
    
    cout<<endl;
    cout<<"Total bill =  "<<TotalBill<<endl;
    cout << "The total bill after service and tax = " << CalculateBillAfterServiceAndTax(TotalBill) << endl;
}