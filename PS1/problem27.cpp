#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int ReadNumbers()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return n;
}
void printRangeFromNto1_UsingFor(int n)
{
    cout<<"Using For Loop : \n";
    for(int i = n; i>= 1; i-- )
    {
        cout<<i<<endl;
    }
    
}
void printRangeFromNto1_UsingWhile(int n)
{
    cout<<"Using While : \n";
    int i = n;
    while(i >= 1)
    {
        cout<<i<<endl;
        i--;
    }
}

void printRangeFromNto1_UsingDoWhile(int n)
{
    cout<<"Using Do While : \n";
    int i=n;
    do
    {
        cout<<i<<endl;
        i--;
    }while (i>=1);
}

int main()
{
    int n=ReadNumbers();
    printRangeFromNto1_UsingWhile(n);
    printRangeFromNto1_UsingFor(n);
    printRangeFromNto1_UsingDoWhile(n);
    return 0;
}
