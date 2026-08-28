#include <iostream>
#include "C:\Users\ADMIN\Downloads\Documents\Desktop\Problem Solving 4\Course8Library.h"

using namespace std;
using namespace MyLib;

//----------(New - Functions)----------//

bool IsValideDate(sDate Date)
{
    if (Date.Day < 1 || Date.Day > 31)
        return false;
    
    if (Date.Month < 1 || Date.Month > 12)
        return false;


    if (Date.Month == 2)
    {
        if (IsLeapYear(Date.Year))
        {
            if (Date.Day > 29)
                return false;
            
        }
        else
        {
            if (Date.Day > 28)
                return false;
           
        }
        
    }
    short DaysInMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
    
    if (Date.Day > DaysInMonth)
            return false;



    return true;
    
}

//----------(New - Functions)----------//

int main()
{
    system("cls");

    sDate Date = ReadDate();

    if (MyLib::IsValideDate(Date))
    {
        cout<<"\nYes , Date Is Valide Date .\n";
    }
    else
    {
        cout<<"\nNo , Date Is Not Valide Date .\n";
    }
    
    return 0;

}