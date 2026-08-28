#include <iostream>

using namespace std;

    struct sDate 
    {
        short Day;
        short Month;
        short Year;
    };

    struct stPeriods
    {
        sDate StartDate;
        sDate EndDate;
    };

    enum enCompareDate
    {
        Before = -1,
        Equal = 0,
        After = 1,
    };

    short ReadNumber(string Message)
    {
        short Number;
        cout<< Message;
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

    bool IsDate1BeforeDate2(sDate Date1,sDate Date2)
    {
        return (Date1.Year < Date2.Year)? true : ((Date1.Year == Date2.Year)?(Date1.Month < Date2.Month? true : (Date1.Month == Date2.Month ? Date1.Day<Date2.Day:false)):false);
    }

    int GetDeffrenceInDays(sDate Date1,sDate Date2,bool includeEndDay = false)
    {
        int TotalDays1 = 0;
        while (IsDate1BeforeDate2(Date1,Date2))
        {
            TotalDays1++;
            Date1 = IncreaseDateByOneDay(Date1);
        }

        return includeEndDay ? ++TotalDays1 : TotalDays1;

    }

    int PeriodLengthInDays(stPeriods Period , bool DayIncludeMatch = false)
    {
        return GetDeffrenceInDays(Period.StartDate, Period.EndDate,DayIncludeMatch);
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

    bool IsOverlapPeriods(stPeriods Period1,stPeriods Period2)
    {
        if (CompareDates(Period2.EndDate,Period1.StartDate)==enCompareDate::Before || CompareDates(Period2.StartDate,Period1.EndDate)==enCompareDate::After)
        return false;
        else 
        return true;
    }

    //----------(New - Functions)----------//
    bool IsDateInPeriod(sDate Date , stPeriods Period)
    {
    
        return !(CompareDates(Date,Period.StartDate) == enCompareDate::Before || CompareDates(Date,Period.EndDate) == enCompareDate::After);
    
        //return (IsDate1AfterDate2(Period.EndDate , Date) && IsDate1BeforeDate2(Period.StartDate , Date));
    }
    //----------(New - Functions)----------//

int main()
{
    system("cls");
    stPeriods Period;
    cout<<"\nEnter Period 1 : \n";
    Period = ReadPeriods();
    cout<<"\nEnter Date To Check : ";
    sDate Date = ReadDate();

    if (IsDateInPeriod(Date,Period))
        cout << "\nYes, Date is within period\n";
    else 
        cout << "\nNo, Date is NOT within period\n";
    
    return 0;
}