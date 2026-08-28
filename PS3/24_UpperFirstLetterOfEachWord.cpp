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

string UpperFirstLetterOfEachWord(string str)
{
    bool IsFirstLetter = true;

    cout<<"\nString After Conversion To Upper : \n";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && IsFirstLetter)
        {
            str[i]=toupper(str[i]);
        }
        IsFirstLetter = (str[i] == ' '? true : false );
    }
    return str;
}

int main()
{
   system("cls");

    string str = ReadString();
    str = UpperFirstLetterOfEachWord(str);
    cout << str << endl;
    system("pause");
    return 0;
}