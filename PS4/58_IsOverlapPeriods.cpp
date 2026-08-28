#include <iostream>
using namespace std;


struct sDate 
{
    short Day;
    short Month;
    short Year;
};

//----------(New - Functions)----------//
struct stPeriods
{
    sDate StartDate;
    sDate EndDate;
};

//----------(New - Functions)----------//

enum enCompareDate
{
    Before = -1,
    Equal = 0,
    After = 1,
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


enCompareDate CompareDates(sDate Date1,sDate Date2)
{
    if (IsDate1BeforeDate2(Date1,Date2))
        return enCompareDate::Before;

    if (IsDate1EqualsToDate2(Date1,Date2))
        return enCompareDate::Equal;

    
    return enCompareDate::After;

}


//----------(New - Functions)----------//


bool IsOverlapPeriods(stPeriods Period1,stPeriods Period2)
{
    if (CompareDates(Period2.EndDate,Period1.StartDate)==enCompareDate::Before || CompareDates(Period2.StartDate,Period1.EndDate)==enCompareDate::After)
    return false;
    else 
    return true;
}


stPeriods ReadPeriods()
{
    stPeriods Period;
    cout<<"\n=========================\n";
    cout<<"\nEnter Start Date : ";
    Period.StartDate = ReadDate();
    cout<<"\n>----------------------<\n";
    cout<<"\nEnter End Date : ";
    Period.EndDate = ReadDate();
    cout<<"=========================\n";
    return Period;
}


//----------(New - Functions)----------//

int main()
{
    system("cls");
    stPeriods Period1,Period2;
    cout<<"\nEnter Period 1 : \n";
    Period1 = ReadPeriods();
    cout<<"\nEnter Period 2 : ";
    Period2 = ReadPeriods();

    if (IsOverlapPeriods(Period1,Period2))
        cout<<"\nYes, Periods Overlap\n";
    else 
        cout<< "\nNo, Periods do not Overlap\n";
    
    return 0;
}