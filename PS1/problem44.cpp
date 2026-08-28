#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek
{
    Sat=1,
    Sun=2,
    Mon=3,
    Tue=4,
    Wed=5,
    Thu=6,
    Fri=7
};

int ReadNumberInRange(string Message , int From , int To)
{
    int Number=0 ;
    do{
    cout << Message ;
    cin >> Number ;
    }while(Number<From || Number>To);
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek) ReadNumberInRange("Please Enter The Number Of Day : ",1,7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
        case enDayOfWeek::Sat :
            return "Saturday";
        case enDayOfWeek::Sun : 
            return "Sunday";
        case enDayOfWeek::Mon : 
            return "Monday";
        case enDayOfWeek::Tue : 
            return "Tuesday";
        case enDayOfWeek::Wed : 
            return "Wednesday";
        case enDayOfWeek::Thu : 
            return "Thursday";
        case enDayOfWeek::Fri : 
            return "Friday";
        default :
            return "Wrong Entities ";

    }
}

int main()
{
    cout<<GetDayOfWeek(ReadDayOfWeek())<<endl;

    return 0;
}