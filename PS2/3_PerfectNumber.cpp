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
bool isPerfectNumber(int Number)
{
   int Sum=0;
   for (int n = 1; n < Number; n++)
   {
    if(Number%n==0)
    Sum+=n;
   }
   return Number==Sum;
}
void PrintResult(int Number)
{
    if(isPerfectNumber(Number))
    cout <<Number<<" Is Perfect Number. \n";
    else
    cout <<Number<<" Is Not Perfect Number. \n";
}
int main()
{
    PrintResult(ReadPositiveNumber("Enter The Number"));

    return 0;
}
