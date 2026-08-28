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

void IsInvertedPatternNumber(int Number)
{
    for (int i = Number; i >= 1; i--)
    {
        for (int j = i; j >=1; j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
}
int main()
{
    IsInvertedPatternNumber(ReadPositiveNumber("Enter a Inverted pattern number"));

    return 0;
}