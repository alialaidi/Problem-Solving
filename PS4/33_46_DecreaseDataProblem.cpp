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


bool IsLastDayinMonth(sDate Date1)
{
    return (Date1.Day == NumberOfDaysInMonth(Date1.Year,Date1.Month));
}


bool IsLastMonthinYear(short Month)
{
    return (Month == 12);
}


//----------(New - Functions)----------//


sDate DecreaseDateByOneDay(sDate Date)
{

    if (Date.Day == 1)
    {
        if (Date.Month == 1)
        {
            Date.Day = 31;
            Date.Month = 12;
            Date.Year--;
            
        }
        else
        {
            Date.Day = NumberOfDaysInMonth(Date.Year,Date.Month);;
            Date.Month--;
        }
    }
    else
    {
        Date.Day--;
    }

    return Date;
}


sDate DecreaseDateByXDays(short NumberOfDays,sDate Date)
{
    for (short i = 1; i <= NumberOfDays; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}


sDate DecreaseDateByOneWeek(sDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}


sDate DecreaseDateByXWeeks(short NumberOfWeeks,sDate Date)
{
    for (short i = 1; i <= NumberOfWeeks; i++)
    {
        Date = DecreaseDateByOneWeek(Date);
    }
    return Date;
}


sDate DecreaseDateByOneMonth(sDate Date)
{
    if (Date.Month == 1)
    {
        Date.Month = 12;
        Date.Year--;
    }
    else
    {
        Date.Month--;
    }

    short NumberOfDaysToCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
    if (Date.Day > NumberOfDaysToCurrentMonth)
    {
        Date.Day = NumberOfDaysToCurrentMonth;
    }
    return Date;
}


sDate DecreaseDateByXMonths(short NumberOfMonths,sDate Date)
{
    for (short i = 1; i <= NumberOfMonths; i++)
    {
        Date = DecreaseDateByOneMonth(Date);
    }
    return Date;
}


sDate DecreaseDateByOneYear(sDate Date)
{
    Date.Year--;
    return Date;
}


sDate DecreaseDateByXYears(short NumberOfYears,sDate Date)
{
    for (short i = 1; i <= NumberOfYears; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }
    return Date;
}


sDate DecreaseDateByXYearsFaster(short NumberOfYears,sDate Date)
{
    Date.Year-=NumberOfYears;
    return Date;
}


sDate DecreaseDateByOneDecade(sDate Date)
{
    Date.Year-=10;
    return Date;
}


sDate DecreaseDateByXDecades(short NumberOfDecades,sDate Date)
{
    for (short i = 1; i <= NumberOfDecades * 10; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }
    return Date;
}


sDate DecreaseDateByXDecadesFaster(short NumberOfDecades,sDate Date)
{
    Date.Year -= NumberOfDecades * 10;
    return Date;
}


sDate DecreaseDateByOneCentury(sDate Date)
{
    Date.Year -= 100;
    return Date;
}


sDate DecreaseDateByOneMillennium(sDate Date)
{
    Date.Year -= 1000;
    return Date;
}


//----------(New - Functions)----------//


void PrintAllDateFunction(sDate Date1)
{
    cout << "\nDate After: \n";
    Date1 = DecreaseDateByOneDay(Date1);
    cout << "\n01-Subtracting one day is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByXDays(10, Date1);
    cout << "\n02-Subtracting 10 days is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByOneWeek(Date1);
    cout << "\n03-Subtracting one week is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByXWeeks(10, Date1);
    cout << "\n04-Subtracting 10 weeks is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByOneMonth(Date1);
    cout << "\n05-Subtracting one month is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByXMonths(5, Date1);
    cout << "\n06-Subtracting 5 months is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByOneYear(Date1);
    cout << "\n07-Subtracting one year is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByXYears(10, Date1);
    cout << "\n08-Subtracting 10 Years is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByXYearsFaster(10, Date1);
    cout << "\n09-Subtracting 10 Years (faster) is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByOneDecade(Date1);
    cout << "\n10-Subtracting one Decade is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByXDecades(10, Date1);
    cout << "\n11-Subtracting 10 Decades is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByXDecadesFaster(10, Date1);
    cout << "\n12-Subtracting 10 Decade (faster) is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByOneCentury(Date1);
    cout << "\n13-Subtracting One Century is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = DecreaseDateByOneMillennium(Date1);
    cout << "\n14-Subtracting One Millennium is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
}


int main()
{
    system("cls");
    sDate Date = ReadDate();

    PrintAllDateFunction(Date);
    
    
    return 0;
}