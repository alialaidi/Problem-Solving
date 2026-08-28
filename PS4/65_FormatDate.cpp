#include <iostream>
#include "C:\Users\ADMIN\Downloads\Documents\Desktop\Problem Solving 4\Course8Library.h"
#include <string>
#include <vector>
using namespace std;
using namespace MyLib;


//----------(New - Functions)----------//


string FormateDate(sDate Date , string DateFormat= "dd/mm/yyyy")
{
    string FormattedDateString = "";
    FormattedDateString = ReplaceWordInString(DateFormat,"dd",to_string(Date.Day));
    FormattedDateString = ReplaceWordInString(FormattedDateString,"mm",to_string(Date.Month));
    FormattedDateString = ReplaceWordInString(FormattedDateString,"yyyy",to_string(Date.Year));

    return FormattedDateString;
}


//----------(New - Functions)----------//


int main()
{
    ResetSecreen();
    string str = MyLib::ReadString("\nPlease Enter Date dd/MM/yyyy : ");

    sDate Date = MyLib::StringToDateStructure(str);

    cout<< "\n" <<MyLib::FormateDate(Date) << "\n";
    cout<< "\n" <<MyLib::FormateDate(Date,"yyyy/dd/mm") << "\n";
    cout<< "\n" <<MyLib::FormateDate(Date,"mm/dd/yyyy") << "\n";
    cout<< "\n" <<MyLib::FormateDate(Date,"mm-dd-yyyy") << "\n";
    cout<< "\n" <<MyLib::FormateDate(Date,"dd-mm-yyyy") << "\n";
    cout<< "\n" <<MyLib::FormateDate(Date,"Day : dd , Month : mm , Year : yyyy") << "\n";

    return 0;

}