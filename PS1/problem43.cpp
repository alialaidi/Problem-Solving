#include <iostream>
#include <cmath>
using namespace std;

struct stTaskDuration
{
    int Second;
    int Minutes;
    int Hours;
    int Days;
    
};
int ReadPositiveValue(string Message)
{
    int Number;
    do
    {
        cout << Message;
        cin >> Number; 
    } while (Number <= 0 );


    return Number;
}
stTaskDuration SecondToTaskDuration(int TotalSeconds)
{
    stTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60 ;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;

    int Reminder = 0;

    TaskDuration.Days = floor(TotalSeconds / SecondsPerDay);
    Reminder = TotalSeconds % SecondsPerDay; 
    TaskDuration.Hours = floor(Reminder / SecondsPerHour);
    Reminder = Reminder % SecondsPerHour;
    TaskDuration.Minutes = floor(Reminder / SecondsPerMinute);
    Reminder = Reminder % SecondsPerMinute;
    TaskDuration.Second = Reminder;
   

   return TaskDuration;
}
void Print(stTaskDuration TaskDuration)
{
    cout<<"Days : Hours : Minutes : Second" <<endl;
    cout << TaskDuration.Days;
    cout << " : " << TaskDuration.Hours;
    cout << " : " << TaskDuration.Minutes;
    cout << " : " << TaskDuration.Second << endl;
}
int main()
{
    int TotalSecond = ReadPositiveValue("Enter a Total Second Number : "); 
    Print(SecondToTaskDuration(TotalSecond));

    return 0;
}

