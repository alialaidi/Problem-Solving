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
void printRangeFrom1toN_UsingFor(int n)
{
    for(int i = 1; i <= n; i++ )
    {
        cout<<i<<endl;
    }
    
}
void printRangeFrom1toN_UsingWhile(int n)
{
    int i = 1;
    while(i <= n)
    {
        cout<<i<<endl;
        i++;
    }
}

void printRangeFrom1toN_UsingDoWhile(int n)
{
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    }while (i<=n);
}

int main()
{
    int n=ReadNumbers();
   // printRangeFrom1toN_UsingWhile(n);
    //printRangeFrom1toN_UsingFor(n);
      printRangeFrom1toN_UsingDoWhile(n);
    return 0;
}
