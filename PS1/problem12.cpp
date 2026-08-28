#include <iostream>

using namespace std;

void readNumbers(int &num1,int &num2)
{
    
    cout << "Enter two numbers: \n";
    cin >> num1 >> num2;
}
int MaxOfNumber(int num1,int num2)
{
    if (num1<num2)
    return num2;
    else 
    return num1;
}
void PrintResults(int Max)
{
    cout << "The maximum number = " << Max << endl;
}

int main ()
{
    int num1,num2;
    readNumbers(num1,num2);
    PrintResults(MaxOfNumber(num1,num2));

    return 0;
}