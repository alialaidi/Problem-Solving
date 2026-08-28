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


bool IsDate1BeforeDate2(sDate Date1,sDate Date2)
{
    return (Date1.Year < Date2.Year)? true : ((Date1.Year == Date2.Year)?(Date1.Month < Date2.Month? true : (Date1.Month == Date2.Month ? Date1.Day<Date2.Day:false)):false);
}


bool IsDate1EqualsToDate2(sDate Date1,sDate Date2)
{
    return  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}


//----------(New - Functions)----------//
bool IsDate1AfterDate2(sDate Date1,sDate Date2)
{
    return (!IsDate1EqualsToDate2(Date1,Date2) && !IsDate1BeforeDate2(Date1,Date2));
}
//----------(New - Functions)----------//


int main()
{
    system("cls");
    sDate Date1 = ReadDate();
    sDate Date2 = ReadDate();

    if (IsDate1AfterDate2(Date1,Date2))
    {
        cout << "\nYes , Date1 is More than Date2.\n";
    }
    else 
    {
        cout << "\nNo , Date1 is not More than Date2.\n";
    }
    
    return 0;
}