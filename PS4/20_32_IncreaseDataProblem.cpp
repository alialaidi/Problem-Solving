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


sDate IncreaseDateByXDays(short NumberOfDays,sDate Date)
{
    for (short i = 1; i <= NumberOfDays; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}


sDate IncreaseDateByOneWeek(sDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}


sDate IncreaseDateByXWeeks(short NumberOfWeeks,sDate Date)
{
    for (short i = 1; i <= NumberOfWeeks; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }
    return Date;
}


sDate IncreaseDateByOneMonth(sDate Date)
{
    if (Date.Month == 12)
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }

    short NumberOfDaysToCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
    if (Date.Day > NumberOfDaysToCurrentMonth)
    {
        Date.Day = NumberOfDaysToCurrentMonth;
    }
    return Date;
}


sDate IncreaseDateByXMonths(short NumberOfMonths,sDate Date)
{
    for (short i = 1; i <= NumberOfMonths; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }
    return Date;
}


sDate IncreaseDateByOneYear(sDate Date)
{
    Date.Year++;
    return Date;
}


sDate IncreaseDateByXYears(short NumberOfYears,sDate Date)
{
    for (short i = 1; i <= NumberOfYears; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}


sDate IncreaseDateByXYearsFaster(short NumberOfYears,sDate Date)
{
    Date.Year+=NumberOfYears;
    return Date;
}


sDate IncreaseDateByOneDecade(sDate Date)
{
    Date.Year+=10;
    return Date;
}


sDate IncreaseDateByXDecades(short NumberOfDecades,sDate Date)
{
    for (short i = 1; i <= NumberOfDecades * 10; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}


sDate IncreaseDateByXDecadesFaster(short NumberOfDecades,sDate Date)
{
    Date.Year += NumberOfDecades * 10;
    return Date;
}


sDate IncreaseDateByOneCentury(sDate Date)
{
    Date.Year += 100;
    return Date;
}


sDate IncreaseDateByOneMillennium(sDate Date)
{
    Date.Year += 1000;
    return Date;
}


//----------(New - Functions)----------//


void PrintAllDateFunction(sDate Date1)
{
    cout << "\nDate After: \n";
    Date1 = IncreaseDateByOneDay(Date1);
    cout << "\n01-Adding one day is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByXDays(10, Date1);
    cout << "\n02-Adding 10 days is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByOneWeek(Date1);
    cout << "\n03-Adding one week is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByXWeeks(10, Date1);
    cout << "\n04-Adding 10 weeks is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByOneMonth(Date1);
    cout << "\n05-Adding one month is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByXMonths(5, Date1);
    cout << "\n06-Adding 5 months is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByOneYear(Date1);
    cout << "\n07-Adding one year is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByXYears(10, Date1);
    cout << "\n08-Adding 10 Years is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByXYearsFaster(10, Date1);
    cout << "\n09-Adding 10 Years (faster) is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByOneDecade(Date1);
    cout << "\n10-Adding one Decade is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByXDecades(10, Date1);
    cout << "\n11-Adding 10 Decades is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByXDecadesFaster(10, Date1);
    cout << "\n12-Adding 10 Decade (faster) is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByOneCentury(Date1);
    cout << "\n13-Adding One Century is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    Date1 = IncreaseDateByOneMillennium(Date1);
    cout << "\n14-Adding One Millennium is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
}


int main()
{
    system("cls");
    sDate Date = ReadDate();

    PrintAllDateFunction(Date);
    
    
    return 0;
}