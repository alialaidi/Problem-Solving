#include <iostream>
#include "C:\Users\ADMIN\Downloads\Documents\Desktop\Problem Solving 4\Course8Library.h"
#include <string>
#include <vector>
using namespace std;
using namespace MyLib;

//----------(New - Functions)----------//


string ReadString(string Message)
{
    string str;
    cout<<Message;
    getline(cin>>ws,str);
    return str;
}


sDate StringToDateStructure(string str)
{
    sDate Date;
    vector<string> vDate;

    vDate = vSplitFunc(str,"/");
    Date.Day = stoi(vDate[0]); // String To Integer
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;
    
}


string DateToString(sDate Date)
{
    return to_string(Date.Day)+"/"+to_string(Date.Month)+"/"+to_string(Date.Year);
}


//----------(New - Functions)----------//

int main() 
{
    ResetSecreen();
    string str = MyLib::ReadString("\nPlease Enter Date dd/MM/yyyy : ");

    sDate Date = MyLib::StringToDateStructure(str);

    cout<<"\nDay : "<<Date.Day;
    cout<<"\nMonth : "<<Date.Month;
    cout<<"\nYear : "<<Date.Year<<"\n";

    cout<<"\nYou Entered : "<<MyLib::DateToString(Date)<<"\n";

    return 0;

}