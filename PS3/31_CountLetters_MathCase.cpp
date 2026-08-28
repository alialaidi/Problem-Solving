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

char ReadChar()
{
    char ch;
    cout << "Please Enter Your Character : ";
    cin>>ch;
    return ch;

}


short CountLetters(string str,char ch,bool MatchCase = true)
{
    short Counter = 0;
    for (short i = 0; i < str.length(); i++)
    {
        if (MatchCase)
        {
            if(str[i] == ch)
            Counter++;
        }
        else
        {
            if(tolower(str[i]) == tolower(ch))
            Counter++;
        }
        
    }
    return Counter;
}


char InvertLetterCase(char c)
{
    return (isupper(c))? tolower(c) : toupper(c);
}


int main()
{
   system("cls");

    string str = ReadString();

    char ch = ReadChar();

    cout<<"Letters \'"<<ch<<"\' Count = "<<CountLetters(str,ch)<<endl;

    cout<<"Letters \'"<<ch<<"\' ";
    cout<<"Or \'"<<InvertLetterCase(ch)<<"\'";
    cout<<" Count = "<< CountLetters(str,ch,false)<<endl;
    
    system("pause");
    return 0;
}