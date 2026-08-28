#include <iostream>
#include <cmath>

using namespace std;
int ReadNumber()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return n;
}

void PowerOf2_3_4(int Number)
{
   int a,b,c;
    a = Number*Number;
    b = Number*Number*Number;
    c = Number*Number*Number*Number;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
int main()
{
    int Number;
    Number = ReadNumber();
    PowerOf2_3_4(Number);
    return 0;
}