#include <iostream>
#include <cmath>

using namespace std;

float ReadPositiveValue(string Message )
{
    float NumberOfHours;
    do
    {
        cout << Message;
        cin >> NumberOfHours; 
    } while (NumberOfHours <= 0 );


    return NumberOfHours;
}

float HoursToDays(float NumberOfHours )
{
    
    return (float)NumberOfHours/24;
}

float HoursToWeeks(float NumberOfHours )
{
    return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays )
{
    return (float)NumberOfDays / 7;
}

int main ()
{
    float NumberOfHours = ReadPositiveValue("Please Enter Positive Number Of Hours : ");
    float NumberOFDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = HoursToWeeks(NumberOFDays);

    cout<<"Number Of Hours = "<<NumberOfHours<<endl;
    cout<<"Number Of Days = "<<NumberOFDays<<endl;
    cout<<"Number Of Weeks = "<<HoursToWeeks(NumberOfHours)<<endl;

    return 0;
}

