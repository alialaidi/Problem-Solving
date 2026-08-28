#include <iostream>
#include <string>
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

float CalculateRemainder(float TotalBill , float TotalCachPaid)
{
    return TotalCachPaid - TotalBill;
}

int main ()
{
    float TotalBill=ReadPositiveValue("Please Enter Total Bill Value : ");
    float TotalCachPaid=ReadPositiveValue("Please Enter Total Cach Paid Value : ");
    
    cout<<endl;
    cout << "Total Bill = "<<TotalBill<<endl;
    cout << "Total Cach Paid = "<<TotalCachPaid<<endl;

    cout<<"\n_________________________\n";
    cout << "Remainder = "<<CalculateRemainder(TotalBill,TotalCachPaid)<<endl;

    return 0 ; 
}
