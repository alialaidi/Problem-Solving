#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;


string ReadString()
{
    string str;
    cout << "Please Enter Your String : \n";
    getline(cin, str);
    return str;

}


string ReplaceWordInStringUsingBuiltInFunction(string str,string StringToReplace,string sReplaceTo)
{
    short Pos = str.find(StringToReplace);

    while (Pos!= string::npos) {
        str.replace(Pos, StringToReplace.length(), sReplaceTo);
        Pos = str.find(StringToReplace);
    }
    return str;
}

int main()
{
    system("cls");

    string str = ReadString();
    string StringToReplace = ReadString();
    string sReplaceTo = ReadString();

    cout<<"\nOriginal String \n"<<str;
    cout<<"\n\nString After Replace : \n";
    cout<<ReplaceWordInStringUsingBuiltInFunction(str,StringToReplace,sReplaceTo);

    return 0;
}