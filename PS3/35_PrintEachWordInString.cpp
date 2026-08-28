#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string ReadString()
{
    string str;
    cout << "Please Enter Your String : \n";
    getline(cin, str);
    return str;

}

void PrintEachWordInString(string str)
{
    string delim = " ";
    short pos = 0;
    string sWord;

    while ((pos = str.find(delim))!= string::npos)
    {
        sWord = str.substr(0, pos);

        if (sWord != "")
        cout<< sWord << "\n";

        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        cout<<str<<endl;
    }
    
}

int main()
{
    system("cls");

    PrintEachWordInString(ReadString());

    return 0;
}