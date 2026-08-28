#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << " : ";
        cin >> Number; 
    } while (Number <= 0 );


    return Number;
}
int countDigitFrequency(short DigitToCheck,int Number)
{
    int Remainder=0;
    int Number2=0;
    
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == DigitToCheck)
        {
            Number2++;
        }
    }
    return Number2;
}
void PrintAllDigitFrequncy(int Number)
{
    cout<<endl;


    for (int i = 0; i < 10; i++)
    {
        short DigitFrequncy =0;
        DigitFrequncy = countDigitFrequency(i, Number);

        if(DigitFrequncy > 0)
        {
            cout<<"Digit "<<i<<" frequncy is "<<DigitFrequncy<<" Time(s) \n";
        }
        
    }


}
int main()
{
    int Number = ReadPositiveNumber("Please Enter The Main Number");
    PrintAllDigitFrequncy(Number);


    return 0;
}