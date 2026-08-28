#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadSquareSide()
{
    float A;
    cout<<"Enter Square Side : ";
    cin>>A;
    return A;
}
float AreaOfCircleInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(A,2))/4;
    return Area;
}

void PrintResult(float Area)
{
    cout<<"Area of Square Side = "<<Area<<"\n";
}

int main()
{
    PrintResult(AreaOfCircleInscribedInSquare(ReadSquareSide()));
    
    return 0;
}