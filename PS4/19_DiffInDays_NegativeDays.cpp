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
    Date.Month = ReadNumber("Enter Month : ");
    Date.Year = ReadNumber("Enter Year : ");

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


bool IsDate1LessThanDate2(sDate Date1,sDate Date2)
{
    return (Date1.Year < Date2.Year)? true : ((Date1.Year == Date2.Year)?(Date1.Month < Date2.Month? true : (Date1.Month == Date2.Month ? Date1.Day<Date2.Day:false)):false);
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


void SwapDates(sDate& Date1,sDate& Date2)
{
    sDate Temp ;

    Temp.Year = Date1.Year;
    Temp.Month = Date1.Month;
    Temp.Day = Date1.Day;

    Date1.Year = Date2.Year;
    Date1.Month = Date2.Month;
    Date1.Day = Date2.Day;

    Date2.Year = Temp.Year;
    Date2.Month = Temp.Month;
    Date2.Day = Temp.Day;
}


int GetDeffrenceInDays(sDate Date1,sDate Date2,bool includeEndDay = false)
{
    int TotalDays1 = 0;
    short SwapFlagValue = 1;
    while (!IsDate1LessThanDate2(Date1,Date2))
    {
        SwapDates(Date1,Date2);
        SwapFlagValue = -1;
    }
    while (IsDate1LessThanDate2(Date1,Date2))
    {
        TotalDays1++;
        Date1 = IncreaseDateByOneDay(Date1);
    }
    

    return includeEndDay ? ++TotalDays1 * SwapFlagValue : TotalDays1*SwapFlagValue;

}


int main()
{
    system("cls");
    sDate Date1 = ReadDate();
    sDate Date2 = ReadDate();

    cout<<"\n\nDiffrence Is : ";
    cout<<GetDeffrenceInDays(Date1,Date2)<<" Day(s).";
    cout<<"\nDiffrence (Including End Day) Is : ";
    cout<<GetDeffrenceInDays(Date1,Date2,true)<<" Day(s)."<<"\n\n";
    
    
    return 0;
}