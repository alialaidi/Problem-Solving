#include <iostream>
#include "C:\Users\ADMIN\Downloads\Documents\Desktop\Problem Solving 4\Course8Library.h"
using namespace std;
using namespace MyLib;


//----------(New - Functions)----------//

int CountOverlapDays(stPeriods Period1, stPeriods Period2)
{
    int Period1Length = PeriodLengthInDays(Period1, true);
    int Period2Length = PeriodLengthInDays(Period2, true);
    int OverlapDays = 0;

    if (!IsOverlapPeriods(Period1,Period2))
    return 0;

    if (Period1Length < Period2Length)
    {
        while (IsDate1BeforeDate2(Period1.StartDate,Period1.EndDate))
        {
            if (IsDateInPeriod(Period1.StartDate,Period2))
            OverlapDays++;

            Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
        }
        
    }
    else 
    {
        while (IsDate1BeforeDate2(Period2.StartDate,Period2.EndDate))
        {
            if (IsDateInPeriod(Period2.StartDate,Period1))
            OverlapDays++;

            Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
        }
    }
    
    return OverlapDays;
}

//----------(New - Functions)----------//


int main()
{
    system("cls");
    
    cout<<"\nEnter Period 1 : \n";
    stPeriods Period1 = ReadPeriods();
    cout<<"\nEnter Period 2 : ";
    stPeriods Period2 = ReadPeriods();

    cout<<"\nOverlap Days Count = "<<MyLib::CountOverlapDays(Period1,Period2)<<endl;
    
}