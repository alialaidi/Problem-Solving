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


string DayShortName(short DayOfWeekOreder)
{
    string arrOfDay[]={"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arrOfDay[DayOfWeekOreder];
}


void PrintDayName(short Year,short Month,short Day)
{   
    cout<<"\n\n\nDate : "<<Day<<"/"<<Month<<"/"<<Year;
    cout<<"\nDay Order : "<<DayOfWeekOrder( Year, Month, Day);
    cout<<"\nDay Name : "<<DayShortName(DayOfWeekOrder( Year, Month, Day))<<endl;

}


int main()
{
    system("cls");
    short Year = ReadNumber("\nEnter a Year : ");
    short Month = ReadNumber("\nEnter a Month : ");
    short Day = ReadNumber("\nEnter a Day : ");
    PrintDayName(Year,Month,Day);
    

    return 0;
}