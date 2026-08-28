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
int ReadPower()
{
    int M;
    cout<<"Enter a power: ";
    cin>>M;
    return M;
}
int PowerOf2_3_4(int n,int M)
{
    if (M==0) 
    return 1;

    int P = 1;

    for (int i = 1; i <= M; i++)
    {
        P *= n;
    }
    return P;
}
int main()
{
    cout<<endl<<"Result = "<<PowerOf2_3_4(ReadNumber(),ReadPower())<<endl;
    return 0;
}