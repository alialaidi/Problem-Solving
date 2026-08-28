#include <iostream>
#include <string>
#include <cmath>

using namespace std;
enum enOddOrEven{ Odd=1 , Even=2 };
int ReadNumbers()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return n;
}

enOddOrEven CheckOddOrEven(int Number)
{
    if(Number%2==0)
    {
        return enOddOrEven::Even;
    }
    else
    {
        return enOddOrEven::Odd;
    }
}
int SumEvenNumberFrom1toN_UsingFor(int n)
{
    cout<<"Using For"<<endl;

   int Sum=0;
    for(int i = 1; i <= n; i++ )
    {
      if ( CheckOddOrEven(i) == enOddOrEven::Even)
          Sum+=i;
    }

    return Sum;
}
int SumEvenNumberFrom1toN_UsingWhile(int n)
{
    cout<<"Using While"<<endl;
    int i = 1;
    int Sum=0;
    while(i <= n)
    {
        if ( CheckOddOrEven(i) == enOddOrEven::Even)
        Sum+=i;
        i++;
    }
    return Sum;
}

int SumEvenNumberFrom1toN_UsingDoWhile(int n)
{
    cout<<"Using Do While"<<endl;
    int i=1;
    int Sum=0;
    do
    {
        if ( CheckOddOrEven(i) == enOddOrEven::Even)
        Sum+=i;
        i++;
    }while (i<=n);

    return Sum;
}

int main()
{
    int n=ReadNumbers();
    cout<<SumEvenNumberFrom1toN_UsingWhile(n)<<endl;
    cout<<SumEvenNumberFrom1toN_UsingFor(n)<<endl;
    cout<<SumEvenNumberFrom1toN_UsingDoWhile(n)<<endl;
    return 0;
}
