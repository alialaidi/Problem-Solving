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

/*
هذا حلي 

bool IsLastDayinMonth(sDate Date1)
{
    if (Date1.Day == 30)
    {
        switch (Date1.Month)
        {
        case 4:
        return true;
            break;
        case 6:
        return true;
            break;
        case 9:
        return true;
            break;
        case 11:
            return true;
            break;
        }
    }
    else if (Date1.Day == 31)
    {
        switch (Date1.Month)
        {
        case 1:
        return true;
            break;
        case 3:
        return true;
            break;
        case 5:
        return true;
            break;
        case 7:
        return true;
            break;
        case 8:
        return true;
            break;
        case 10:
        return true;
            break;
        case 12:
            return true;
            break;
        }
    }
    else if (IsLeapYear(Date1.Year) && Date1.Month == 2 && Date1.Day == 29)
    {
        return true;
    }
    else if (!IsLeapYear(Date1.Year) && Date1.Month ==2 && Date1.Day == 28)
    {
        return true;
    }
    return false;
}
*/


 /*حل الدكتور  */


bool IsLastDayinMonth(sDate Date1)
{
    return (Date1.Day == NumberOfDaysInMonth(Date1.Year,Date1.Month));
}


bool IsLastMonthinYear(short Month)
{
    return (Month == 12);
}


int main()
{
    system("cls");
    sDate Date1 = ReadDate();
    

    if (IsLastDayinMonth(Date1))
    {
        cout << "\nYes , Day Is Last Day In Month.\n";
    }
    else 
    {
        cout << "\nNo , Day Is Not Last Day In Month.\n";
    }

    if (IsLastMonthinYear(Date1.Month))
    {
        cout << "\nYes , Month Is Last Month In Year.\n\n";
    }
    else 
    {
        cout << "\nNo , Month Is Not Last Month In Year.\n\n";
    }
    
    return 0;
}