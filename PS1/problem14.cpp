
#include <iostream>

using namespace std;

void ReadNumbers(int &num1, int &num2)
{
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << endl;
}

void Swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void PrintNumber(int num1,int num2)
{
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
}

int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    Swap(num1, num2);
    PrintNumber(num1, num2);
    return 0;
}