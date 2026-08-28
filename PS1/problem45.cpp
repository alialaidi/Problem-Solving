#include <iostream>
#include <string>

using namespace std;

enum enDayOfYear
{
    Jan=1,
    Feb=2,
    Mar=3,
    Apr=4,
    May=5,
    Jun=6,
    Jul=7,
    Aug=8,
    Sep=9,
    Oct=10,
    Nov=11,
    Dec=12,
};

int ReadNumberInRange(string Message , int From , int To)
{
    int Number=0 ;
    do{
    cout << Message ;
    cin >> Number ;
    }while(Number<From || Number>To);
}

enDayOfYear ReadDayOfYear()
{
    return (enDayOfYear) ReadNumberInRange("Please Enter The Number Of Mounth : ",1,12);
}

string GetDayOfYear(enDayOfYear Day)
{
    switch (Day)
    {
        case enDayOfYear::Jan :
            return "January";
        case enDayOfYear::Feb : 
            return "February";
        case enDayOfYear::Mar : 
            return "March";
        case enDayOfYear::Apr :  
            return "April";
        case enDayOfYear::May :
            return "May";
        case enDayOfYear::Jun : 
            return "Jun";
        case enDayOfYear::Jul : 
            return "July";
        case enDayOfYear::Aug : 
            return "August";
        case enDayOfYear::Sep :
            return "Septmber";
        case enDayOfYear::Oct :
            return "October";
        case enDayOfYear::Nov :
            return "November";
        case enDayOfYear::Dec :
            return "December";
        default :
            return "Wrong Entities! , Not a valid Mounth";

    }
}

int main()
{
    cout<<GetDayOfYear(ReadDayOfYear())<<endl;

    return 0;
}

