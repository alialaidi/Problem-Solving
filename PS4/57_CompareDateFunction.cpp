#include <iostream>
using namespace std;


struct sDate 
{
    short Day;
    short Month;
    short Year;
};

//----------(New - Functions)----------//
enum enCompareDate
{
    Before = -1,
    Equal = 0,
    After = 1,
};
//----------(New - Functions)----------//

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


bool IsDate1BeforeDate2(sDate Date1,sDate Date2)
{
    return (Date1.Year < Date2.Year)? true : ((Date1.Year == Date2.Year)?(Date1.Month < Date2.Month? true : (Date1.Month == Date2.Month ? Date1.Day<Date2.Day:false)):false);
}


bool IsDate1EqualsToDate2(sDate Date1,sDate Date2)
{
    return  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}


bool IsDate1AfterDate2(sDate Date1,sDate Date2)
{
    return (!IsDate1EqualsToDate2(Date1,Date2) && !IsDate1BeforeDate2(Date1,Date2));
}


//----------(New - Functions)----------//

enCompareDate CompareDates(sDate Date1,sDate Date2)
{
    if (IsDate1BeforeDate2(Date1,Date2))
        return enCompareDate::Before;

    if (IsDate1EqualsToDate2(Date1,Date2))
        return enCompareDate::Equal;

    
    return enCompareDate::After;

}

//----------(New - Functions)----------//


int main()
{
    system("cls");
    cout<<"\nEnter Date1 : ";
    sDate Date1 = ReadDate();
    cout<<"\nEnter Date2 : ";
    sDate Date2 = ReadDate();

    cout<<"\n\nCompare Result : "<<CompareDates(Date1, Date2)<<"\n";
    
    return 0;
}