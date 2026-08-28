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
    if (Month<1 || Month>12)
    {
        return 0;
    }

    if (Month == 2)
    {
        return IsLeapYear(Year) ? 29 : 28;
    }
    
    short arr31Days[7]={1,3,5,7,8,10,12};
    
    for (short i = 0; i <= 7; i++)
    {
        if (arr31Days[i] == Month)
        {
            return 31;
        }
    }
    return 30;
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