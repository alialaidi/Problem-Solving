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


char InvertLetterCase(char c)
{
    return (isupper(c))? tolower(c) : toupper(c);
}


string InvertAllLetters(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = InvertLetterCase(str[i]);
    }
    return str;
}


int main()
{
   system("cls");

    string str = ReadString();

    cout<<"\nString After Conversion : \n";
    cout<<InvertAllLetters(str)<<endl;

    
    system("pause");
    return 0;
}