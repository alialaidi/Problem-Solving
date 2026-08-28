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


short NumberOfDaysInMonth(short Month,short Year)
{
    if (Month < 1 || Month > 12)
    return 0;
    int NumberOFDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    return (Month == 2) ? (IsLeapYear(Year)?29:28) : NumberOFDays[Month -1];
}


int NumberOfHoursInMonth(short Month,short Year)
{
    
    return NumberOfDaysInMonth(Month,Year) * 24;
}


int NumberOfMinutesInMonth(short Month,short Year)
{
    return NumberOfHoursInMonth(Month,Year) * 60;
}


int NumberOfSecondInMonth(short Month,short Year)
{
    return NumberOfMinutesInMonth(Month,Year) * 60;
}


void PrintYear(short Month,short Year)
{
    cout<<"\n\nNumber Of Days In Mounth ["<<Month<<"] Is "<<NumberOfDaysInMonth(Month,Year);
    cout<<"\nNumber Of Hours In Mounth ["<<Month<<"] Is "<<NumberOfHoursInMonth(Month,Year);
    cout<<"\nNumber Of Minutes In Mounth ["<<Month<<"] Is "<<NumberOfMinutesInMonth(Month,Year);
    cout<<"\nNumber Of Seconds In Mounth ["<<Month<<"] Is "<<NumberOfSecondInMonth(Month,Year)<<endl;
}


int main()
{
    system("cls");
    short Year = ReadNumber("\nEnter a Year : ");
    short Month = ReadNumber("\n\nEnter a Month : ");
    PrintYear(Month,Year);

    return 0;
}