#include <iostream>
#include <string>

using namespace std;
enum enNumberType { Odd = 1 , Even = 2 };
int readOddOrEven()
{
    int num;
    cout << "Please Enter Integer Number : ";
    cin >> num;

    return num;
}
enNumberType funcOddOrEven(int number )
{
    int result = number%2==0;
    if(result==0){
        return enNumberType::Even;
    }
    else {
        return enNumberType::Odd;
    }
    
    
}
void printOddOrEven(enNumberType NumberType)
{
    if(NumberType==enNumberType::Even)
    {
        cout<<"\n Number is Even. \n";
    }
    else 
    {
        cout<<"\n Number is Odd. \n";
    }
        
}
int main()
{   
    printOddOrEven(funcOddOrEven(readOddOrEven()));

    return 0;
}
