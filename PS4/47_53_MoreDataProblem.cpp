#pragma warnings (disable: 4996)


#include <iostream>
#include <time.h>


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


bool IsLastDayinMonth(sDate Date1)
{
    return (Date1.Day == NumberOfDaysInMonth(Date1.Year,Date1.Month));
}


bool IsLastMonthinYear(short Month)
{
    return (Month == 12);
}


sDate IncreaseDateByOneDay(sDate Date)
{

    if (IsLastDayinMonth(Date))
    {
        if (IsLastMonthinYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
            
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }

    return Date;
}

bool IsDate1LessThanDate2(sDate Date1,sDate Date2)
{
    return (Date1.Year < Date2.Year)? true : ((Date1.Year == Date2.Year)?(Date1.Month < Date2.Month? true : (Date1.Month == Date2.Month ? Date1.Day<Date2.Day:false)):false);
}

int GetDeffrenceInDays(sDate Date1,sDate Date2,bool includeEndDay = false)
{
    int TotalDays1 = 0;
    while (IsDate1LessThanDate2(Date1,Date2))
    {
        TotalDays1++;
        Date1 = IncreaseDateByOneDay(Date1);
    }

    return includeEndDay ? ++TotalDays1 : TotalDays1;

}


short DayOfWeekOrder(short Year,short Month,short Day)
{
    int a = ((14-Month)/12);
    int y = Year - a;
    int m = Month + (12*a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}


short DayOfWeekOrder(sDate Date)
{
    return DayOfWeekOrder(Date.Year,Date.Month,Date.Day);

}


string DayShortName(short DayOfWeekOreder)
{
    string arrOfDay[]={"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arrOfDay[DayOfWeekOreder];
}

//----------(New - Functions)----------//

bool IsEndOfWeek(sDate Date)
{
    return (DayOfWeekOrder(Date) == 6);

}


bool IsWeekEnd(sDate Date)
{
    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex == 5 || DayIndex == 6);
}


bool IsBusinessDay(sDate Date)
{
    return (!IsWeekEnd(Date));
}


short DaysUntilTheEndOfWeek(sDate Date)
{
    return 6 - DayOfWeekOrder(Date);
}


short DaysUntilTheEndOfMonth(sDate Date)
{
    sDate EndOfMonthDate;
    EndOfMonthDate.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
    EndOfMonthDate.Month = Date.Month;
    EndOfMonthDate.Year = Date.Year;

    return GetDeffrenceInDays(Date, EndOfMonthDate,true);

}


short DaysUntilTheEndOfYear(sDate Date)
{
    sDate EndOfYearDate;
    EndOfYearDate.Day = 31;
    EndOfYearDate.Month = 12;
    EndOfYearDate.Year = Date.Year;

    return GetDeffrenceInDays(Date, EndOfYearDate,true);
}


//----------(New - Functions)----------//


sDate GetSystemDate()
{
    sDate Date;
    time_t t = time(0);
    tm* now = localtime(&t);

    Date.Day = now->tm_mday;
    Date.Month = now->tm_mon + 1;
    Date.Year = now->tm_year + 1900;

    return Date;
}


void PrintAllFunction(sDate Date)
{
    Date = GetSystemDate();
    cout << "\nToday is " << DayShortName(DayOfWeekOrder(Date)) << " , ";
    cout<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl; 
    //----------------------
    cout<<"\nIs it End of Week ?\n";
    if (IsEndOfWeek(Date))
    cout<< "Yes it is Saturday, it's of Week.";
    else 
    cout<< "No it's Not end of week.";
    //----------------------
    cout<< "\n\nIs it Weekend ?\n";
    if (IsWeekEnd(Date))
    cout<< "Yes it is a week end";
    else 
    cout<< "No today is "<< DayShortName(DayOfWeekOrder(Date)) << ", Not a weekend.";
    //----------------------
    cout<<"\n\nIs it Business Day ? \n";
    if (IsBusinessDay(Date))
    cout<< "Yes it is a business day";
    else 
    cout<< "No it is NOT a business day";
    //----------------------
    cout << "\n\nDays until end of week : ";
    cout << DaysUntilTheEndOfWeek(Date) << " Day(s).";
    //----------------------
    cout << "\n\nDays until end of month : ";
    cout << DaysUntilTheEndOfMonth(Date) << " Day(s).";
    //----------------------
    cout << "\n\nDays until end of year : ";
    cout << DaysUntilTheEndOfYear(Date) << " Day(s).";

}


int main()
{
    system("cls");
    sDate Date;
    PrintAllFunction(Date);
    return 0;
}