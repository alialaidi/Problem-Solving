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

bool IsVowel(char ch)
{
    ch = tolower(ch);

    return ((ch == 'a')||(ch == 'o')||(ch == 'u')||(ch == 'i')||(ch == 'e'));
}


void PrintLetters(string str)
{
    cout<<"\nVowels in String Are : ";
    for (short i = 0; i < str.length(); i++)
    {
        if (IsVowel(str[i]))
            cout<<str[i]<<"   ";


    }
    cout<<endl;
}


int main()
{
   system("cls");

    string str = ReadString();

    PrintLetters(str);
    
    system("pause");
    return 0;
}