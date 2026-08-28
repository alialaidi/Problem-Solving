#include <iostream>

using namespace std;

void readNumbers(int &num1,int &num2,int &num3)
{
    
    cout << "Enter Three numbers: \n";
    cin >> num1 >> num2 >> num3;
}
int MaxOfNumber(int num1,int num2,int num3)
{
    if (num1<num2)
        if (num1>num3)
            return num1;
        else 
            return num3;
    else 
        if (num2>num3)
            return num2;
        else 
            return num3;
}
void PrintResults(int Max)
{
    cout << "The maximum number = " << Max << endl;
}

int main ()
{
    int num1,num2,num3;
    readNumbers(num1,num2,num3);
    PrintResults(MaxOfNumber(num1,num2,num3));

    return 0;
}