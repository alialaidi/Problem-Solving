#include <iostream>
using namespace std;


void PrintFibonacciUsingLoop(int NumberOfSeries)
{
    int FebNumber = 0 , Prev2 = 0 , Prev1 = 1;
    cout << "1   ";
    
    for (int i = 2; i <= NumberOfSeries; i++)
    {
        FebNumber = Prev1 + Prev2 ;
        cout << FebNumber << "  ";
        
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
}


int main()
{
    system("cls");
    
    PrintFibonacciUsingLoop(10);

    return 0;
}