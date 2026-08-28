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

string UpperAllString(string str)
{
    

    cout<<"\nString After Conversion To Upper : \n";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' )
        {
            str[i]=toupper(str[i]);
        }
        
    }
    return str;
}

string LowerAllString(string str)
{
    cout<<"\nString After Conversion To Lower : \n";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str[i]=tolower(str[i]);
        }
        
    }
    return str;
}

int main()
{
   system("cls");

    string str = ReadString();


    str = UpperAllString(str);
    cout << str << endl;
    str = LowerAllString(str);
    cout << str << endl;
    system("pause");
    return 0;
}