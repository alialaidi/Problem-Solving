#include <iostream>
using namespace std;


struct sDate 
{
    short Day;
    short Month;
    short Year;
};


short ReadNumber(string Message)
{
    short Number;
    cout << Message;
    cin >> Number;
    return Number;
}


sDate ReadDate()
{
    sDate Date;
    Date.Day = ReadNumber("\nEnter Day : ");
    Date.Month = ReadNumber("\nEnter Month : ");
    Date.Year = ReadNumber("\nEnter Year : ");

    return Date;
}


short DayOfWeekOrder(short Year,short Month,short Day)
{
    int a = ((14-Month)/12);
    int y = Year - a;
    int m = Month + (12*a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}


bool IsLeapYear(short Number)
{
    return (Number % 4 == 0 && Number % 100!= 0) || Number % 400 == 0;
}


short NumberOfDaysInMonth(short Year,short Month)
{
    if (Month < 1 || Month > 12)
    return 0;
    int NumberOFDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    return (Month == 2) ? (IsLeapYear(Year)?29:28) : NumberOFDays[Month -1];
}


short NumberOgDaysFromTheBeginningOfTheYear(short Day,short Month,short Year)
{
    short TotalDays = 0;
    
    for (short i = 1; i <=Month-1; i++)
    {
        TotalDays += NumberOfDaysInMonth(Year,i);
    }
    
    TotalDays += Day;

    return TotalDays;
}


sDate GetDateFromDayOrderInYear(short DateOrderInYear,short Year)
{
    sDate Date;
    short ReminingDays = DateOrderInYear;
    short MonthDays = 0;

    Date.Year = Year;
    Date.Month = 1;

    while (true)
    {
        MonthDays = NumberOfDaysInMonth(Year,Date.Month);

        if (ReminingDays > MonthDays)
        {
            ReminingDays -= MonthDays;
            Date.Month++;
        }
        else
        {
            Date.Day = ReminingDays;
            break;
        }
        
    }
    return Date;
    
}


sDate DateAddDays(short Days,sDate Date)
{
    
    short ReminingDays = Days + NumberOgDaysFromTheBeginningOfTheYear(Date.Day , Date.Month , Date.Year);
    short MonthDays = 0;

    Date.Month = 1;

    while (true)
    {
        MonthDays = NumberOfDaysInMonth(Date.Year,Date.Month);

        if (ReminingDays > MonthDays)
        {
            ReminingDays -= MonthDays;
            Date.Month++;
            if (Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }
            
        }
        else
        {
            Date.Day = ReminingDays;
            break;
        }
        
    }
    return Date;
}



bool IsDate1EqualsToDate2(sDate Date1,sDate Date2)
{
    return  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}


int main()
{
    system("cls");
    sDate Date1 = ReadDate();
    sDate Date2 = ReadDate();

    if (IsDate1EqualsToDate2(Date1,Date2))
    {
        cout << "\nYes , Date1 is Equals To Date2.\n";
    }
    else 
    {
        cout << "\nNo , Date1 is not Equals To Date2.\n";
    }
    
    return 0;
}