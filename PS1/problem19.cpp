#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadDiameter()
{
    float d;
    cout<<"Enter Diameter of circle : ";
    cin>>d;
    return d;
}
float AreaOfCircleDiameter(float d)
{
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(d,2))/4;
    return Area;
}

void PrintArea(float Area)
{
    cout<<"Area of Circle Diameter = "<<Area<<"\n";
}

int main()
{
    PrintArea(AreaOfCircleDiameter(ReadDiameter()));
    
    return 0;
}