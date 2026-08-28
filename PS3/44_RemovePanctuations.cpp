#include <iostream>
#include <cctype>
#include <string>

using namespace std;


string ReadString(string Messsge)
{
    string str;
    cout << Messsge;
    getline(cin, str);
    return str;

}

string RemovePanctuationsFromString(string str)
{
    string str2 = "";
    for (short i = 0; i < str.length(); i++)
    {
       if (!ispunct(str[i]))
       {
        str2 += str[i];  
       }
    }
    return str2;

}

int main()
{
    system("cls");
    string str = ReadString("Enter Your String : \n");
    cout<<"Original String : \n"<<str;
    cout<<"\n\nPauncuations Removed : \n"<<RemovePanctuationsFromString(str);

    return 0;
}