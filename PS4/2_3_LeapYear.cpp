#include <iostream>
using namespace std;

short ReadNumber(string Message)
{
    short Number;
    cout << Message;
    cin >> Number;
    return Number;
}

bool IsLeapYear(short Number)
{
    return (Number % 4 == 0 && Number % 100!= 0) || Number % 400 == 0;
}

int main()
{
    system("cls");
    short Year = ReadNumber("Enter a year: ");

    if (IsLeapYear(Year))
    {
        cout<<"\nYes , Year ["<<Year<<"] is leap year\n\n\n";
    }
    else
    {
        cout<<"\nNo , Year ["<<Year<<"] is not leap year\n\n\n";
    }
    
    return 0;
}