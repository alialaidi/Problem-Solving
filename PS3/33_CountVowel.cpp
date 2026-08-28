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


short CountLetters(string str)
{
    short Counter = 0;
    for (short i = 0; i < str.length(); i++)
    {
        if (IsVowel(str[i]))
        Counter++;

    }
    return Counter;
}


int main()
{
   system("cls");

    string str = ReadString();


    cout<<"Number Of Vowels Is = "<<CountLetters(str)<<endl;
    
    system("pause");
    return 0;
}