#include <iostream>
using namespace std;


void PrintFibonacciUsingRecursion(int NumberOfSeries ,int Prev1, int Prev2 )
{
    int FebNumber = 0 ;

    if (NumberOfSeries>0)
    {
        FebNumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = FebNumber;
        cout << FebNumber << "  ";
        PrintFibonacciUsingRecursion(NumberOfSeries-1,Prev1,Prev2);
    }
    
   cout<<endl;
}


int main()
{
    system("cls");
    
    PrintFibonacciUsingRecursion(10,0,1);

    return 0;
}