#include <iostream>
#include <string>

using namespace std;

int ReadTotalSeles()
{
    int totalSeles;

    cout << "Enter total sales: ";
    cin >> totalSeles;

    return totalSeles;
}

float GetCommissionPercentage(float totalSeles)
{
    if (totalSeles>=1000000)
        return 0.1;
    else if (totalSeles>=500000)
        return 0.02;
    else if (totalSeles>=100000)
        return 0.03;
    else if (totalSeles>=50000)
        return 0.05;
    else 
        return 0.0 ; 

}
float CalculateCommission(float totalSeles)
{
    return totalSeles * GetCommissionPercentage(totalSeles);
}

int main()
{
    float totalSeles = ReadTotalSeles();
    cout<<"Comission Percentage = "<<GetCommissionPercentage(totalSeles)<<endl;
    cout<<"Total Comission = "<<CalculateCommission(totalSeles)<<endl;

    return 0;
}