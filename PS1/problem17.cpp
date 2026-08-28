#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(float &a , float &h)
{
    cout<<"Enter a of Triangle : ";
    cin>>a;
    cout<<"Enter h of Triangle : ";
    cin>>h;
}
float AreaOfTriangle(float a , float h)
{
    float Area = (0.5*a*h);
    return Area;
}

void PrintArea(float Area)
{
    cout<<"Area of Triangle = "<<Area<<"\n";
}

int main()
{
    float a,h;
    ReadNumbers(a,h);
    PrintArea(AreaOfTriangle(a,h));
    
    return 0;
}