#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadTriangleData(float &a, float &b)
{
    
    cout<<"Enter the first data : ";
    cin>>a;
    cout<<"Enter the second data : ";
    cin>>b;
    
}
float CircleAreaByITriangle(float a, float b)
{
    const float PI = 3.141592653589793238;
    float d=(2*a-b)/(2*a+b);
    float s = (pow(b,2)/4);
    float Area = PI * s * d;
    return Area;
}

void PrintResult(float Area)
{
    cout<<"Circle Area By I Triangle = "<<Area<<"\n";
}

int main()
{
    float a,b;
    ReadTriangleData(a,b);
    PrintResult(CircleAreaByITriangle(a,b));
    
    return 0;
}