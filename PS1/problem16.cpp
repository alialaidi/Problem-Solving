#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(int &a , int &d)
{
    cout<<"Enter a of Rectangle : ";
    cin>>a;
    cout<<"Enter d of Rectangle : ";
    cin>>d;
}
float AreaOfRectangle(int a , int d)
{
    float Area = (float) (a * sqrt(pow(d,2)-pow(a,2)));
    return Area;
}

void PrintArea(float Area)
{
    cout<<"Area through diagonal of Rectangle = "<<Area<<"\n";
}

int main()
{
    int a,d;
    ReadNumbers(a,d);
    PrintArea(AreaOfRectangle(a,d));
    
    return 0;
}