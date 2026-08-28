#include <iostream>

using namespace std;

enum enOperationType 
{

Add = '+', 
Subtract = '-',
Divide = '/' ,
Multiply = '*'

};

float ReadNumber(string Message)
{
    float Number; 
    cout << Message ;
    cin >> Number;

    return Number;
}

enOperationType ReadOpType()
{
    char OT = '+';
    cout << "Please Enter The Operation Type (+,-,*,/) : ";
    cin >> OT;

    return (enOperationType)OT;
}

float Calculate(float Number1 , float Number2 , enOperationType OpType)
{
   switch (OpType) 
   {
    case enOperationType::Add :
        return Number1 + Number2;
    case enOperationType::Subtract :
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;
    default :
        return Number1 + Number2;
   } 
}

int main()
{
    float Number1, Number2;
    Number1 = ReadNumber("Please Enter The First Number : ");
    Number2 = ReadNumber("Please Enter The Second Number : ");
    enOperationType OpType = ReadOpType();

    float Result = Calculate(Number1, Number2, OpType);
    cout << "The Result Is : " << Result << endl;
    
 
 
    return 0;
}