#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message)
{
    float Number; 
    cout << Message ;
    cin >> Number;

    return Number; 
}

float SumNumbers()
{
    int Sum = 0, Number = 0 , Counter = 0 ;

    do 
    {
        Number = ReadNumber("Enter a number "+to_string(Counter+1)+" : "); 
        if (Number == -99)
        {
            break;
        }
        Sum += Number;
        Counter++;

    }while(Number != -99);
    return Sum;
}

int main ()
{
    cout <<" Result = "<<SumNumbers()<<endl;

    return 0;
}