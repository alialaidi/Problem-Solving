#include <iostream>

using namespace std;

struct stTaskDurationInSecond
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
stTaskDurationInSecond ReadTaskDurationInSecond()
{
    stTaskDurationInSecond TaskDurationInSecond;
    
   TaskDurationInSecond.Second = ReadPositiveValue("Enter a Second Number : ");
   TaskDurationInSecond.Minutes = ReadPositiveValue("Enter a Minutes Number : ");
   TaskDurationInSecond.Hours = ReadPositiveValue("Enter a Hours Number : ");
   TaskDurationInSecond.Days = ReadPositiveValue("Enter a Days Number : ");
   

   return TaskDurationInSecond;
}

int HowManySecond(stTaskDurationInSecond TaskDurationInSecond)
{
    int TotalSeconds;
        TotalSeconds = TaskDurationInSecond.Second*1 + TaskDurationInSecond.Minutes*60 + TaskDurationInSecond.Hours*60*60 + TaskDurationInSecond.Days*60*60*24;
        return TotalSeconds;
}
int main()
{
    int TotalSecond = HowManySecond(ReadTaskDurationInSecond()); 
    cout<<"Total Second = "<<TotalSecond<<endl;

    return 0;
}

