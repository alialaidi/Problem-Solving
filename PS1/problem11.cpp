#include <iostream>

using namespace std;

enum enPassFail { pass=1, fail=0 };

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
float AverageOf3Numbers(int num1, int num2, int num3)
{
    float TotalAverage=(float)(SumOf3Numbers(num1, num2, num3)/3);
    
    return TotalAverage;
}

enPassFail CheckAverage(float Avg)
{
    if (Avg >= 50)
    return enPassFail::pass;
    else
    return enPassFail::fail;
}

void PrintNumbers(int Total)
{
    cout << "The Sum Of 3 Numbers = " << Total;

}
void PrintAvgNumbers(float Avg)
{
    cout << "The Average Of 3 Numbers = " << Avg;
    if (CheckAverage(Avg) == enPassFail::pass)
    cout << "\nThe Student Passed\n";
    else
    cout << "\nThe Student Failed\n";
}

int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintNumbers(SumOf3Numbers(num1, num2, num3));
    cout << endl;
    PrintAvgNumbers(AverageOf3Numbers(num1,num2,num3));

    return 0;
}

