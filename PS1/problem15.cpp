#include <iostream>

using namespace std;

void ReadNumbers(int &length , int &width)
{
    cout<<"Enter length of Rectangle : ";
    cin>>length;
    cout<<"Enter width of Rectangle : ";
    cin>>width;
}

int AreaOfRectangle(int length , int width)
{
        float Area = (float)(length*width);
        return Area;
}

void PrintArea(float Area)
{
    cout<<"Area of Rectangle = "<<Area<<"\n";
}

int main()
{
    int length,width;
    ReadNumbers(length,width);
    PrintArea(AreaOfRectangle(length,width));
    
    return 0;
}