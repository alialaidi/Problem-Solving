#include <iostream>
using namespace std;


short ReadNumber(string Message)
{
    short Number;
    cout << Message;
    cin >> Number;
    return Number;
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


string DayShortName(short DayOfWeekOreder)
{
    string arrOfDay[]={"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arrOfDay[DayOfWeekOreder];
}


string MonthShortName(short DayOfWeekOreder)
{
    string arrOfDay[]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return arrOfDay[DayOfWeekOreder-1];
}


void PrintMonthCalender(short Year,short Month)
{
    short NumberOfDays;

    int Current = DayOfWeekOrder(Year,Month,1);

    NumberOfDays = NumberOfDaysInMonth(Year, Month);

    printf("  ===============%s===============\n\n",
    MonthShortName(Month).c_str());
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    short i;
    for (i = 0; i < Current; i++)
    printf("     ");

    for (int j = 1; j <= NumberOfDays; j++)
    {
        printf("%5d", j);

        if (++i==7)
        {
            i = 0;
            printf("\n");
        }
        
    }
    
    printf("\n  =================================\n\n");
}


int main()
{
    system("cls");
    short Year = ReadNumber("\nEnter a Year : ");
    short Month = ReadNumber("\nEnter a Month : ");

    PrintMonthCalender(Year, Month);
    return 0;
}