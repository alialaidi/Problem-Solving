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

string LowerFirstLetterOfEachWord(string str)
{
    bool IsFirstLetter = true;

    cout<<"\nString After Conversion To Lower : \n";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && IsFirstLetter)
        {
            str[i]=tolower(str[i]);
        }
        IsFirstLetter = (str[i] == ' '? true : false );
    }
    return str;
}

int main()
{
   system("cls");

    string str = ReadString();
    str = LowerFirstLetterOfEachWord(str);
    cout << str << endl;
    system("pause");
    return 0;
}