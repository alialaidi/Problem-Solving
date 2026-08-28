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


short NumberOfDaysInYear(short Year)
{
    if (IsLeapYear(Year))
        return 366;
    else
        return 365;
}


int NumberOfHoursInYear(short Year)
{
    
    return NumberOfDaysInYear(Year) * 24;
}


int NumberOfMinutesInYear(short Year)
{
    return NumberOfHoursInYear(Year) * 60;
}


int NumberOfSecondInYear(short Year)
{
    return NumberOfMinutesInYear(Year) * 60;
}


void PrintYear(short Year)
{
    cout<<"\n\nNumber Of Days In Year: ["<<Year<<"] Is "<<NumberOfDaysInYear(Year);
    cout<<"\nNumber Of Hours In Year: ["<<Year<<"] Is "<<NumberOfHoursInYear(Year);
    cout<<"\nNumber Of Minutes In Year: ["<<Year<<"] Is "<<NumberOfMinutesInYear(Year);
    cout<<"\nNumber Of Seconds In Year: ["<<Year<<"] Is "<<NumberOfSecondInYear(Year)<<endl;
}


int main()
{
    system("cls");
    short Year = ReadNumber("Enter a Year : ");
    PrintYear(Year);

    return 0;
}