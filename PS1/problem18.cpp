#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadNumbers()
{
    float r;
    cout<<"Enter rediuos of circle : ";
    cin>>r;
    return r;
}
float AreaOfCircle(float r)
{
    const float PI = 3.141592653589793238;
    float Area = PI * pow(r,2);
    return Area;
}

void PrintArea(float Area)
{
    cout<<"Area of Circle = "<<Area<<"\n";
}

int main()
{
    PrintArea(AreaOfCircle(ReadNumbers()));
    
    return 0;
}