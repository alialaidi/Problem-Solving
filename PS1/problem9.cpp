#include <iostream>

using namespace std;

void ReadNumbers(int &num1, int &num2, int &num3)
{
    cout << "Enter The First Number : ";
    cin >> num1;
    cout << "Enter The Second Number : ";
    cin >> num2;
    cout << "Enter The Third Number : ";
    cin >> num3;
}

int SumOf3Numbers(int num1, int num2, int num3)
{
    float TotalSum=(float)(num1+num2+num3);
    
    return TotalSum;
}

void PrintNumbers(int Total)
{
    cout << "The Sum Of 3 Numbers = " << Total;

}

int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintNumbers(SumOf3Numbers(num1, num2, num3));


    return 0;
}

