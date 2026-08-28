#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadCircumference()
{
    float l;
    cout<<"Enter Circumference of Circle: ";
    cin>>l;
    return l;
}
float CircleAreaByCircumference(float l)
{
    const float PI = 3.141592653589793238;
    float Area = pow(l,2)/(PI *4);
    return Area;
}

void PrintResult(float Area)
{
    cout<<"Circle Area By Circumference = "<<Area<<"\n";
}

int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));
    
    return 0;
}