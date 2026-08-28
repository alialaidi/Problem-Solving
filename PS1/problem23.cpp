#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadTriangleData(float &a , float &b , float &c)
{
    
    cout<<"Enter Diameter of circle : ";
    cin>>a;
    cout<<"Enter Diameter of circle : ";
    cin>>b;
    cout<<"Enter Diameter of circle : ";
    cin>>c;
  
}
float CircleAreaByATriangle(float a , float b , float c)
{
    const float PI = 3.141592653589793238;
    float P;
    P = (a+b+c)/2;

    float r;
    r = (a*b*c)/(4*(sqrt(P*(P-a)*(P-b)*(P-c))));

    float Area =PI * pow(r,2);

    return Area;
}

void PrintResult(float Area)
{
    cout<<"Area of Circle Diameter = "<<Area<<"\n";
}

int main()
{
    float a,b,c;
    ReadTriangleData(a,b,c);
    PrintResult(CircleAreaByATriangle(a,b,c));
    
    return 0;
}