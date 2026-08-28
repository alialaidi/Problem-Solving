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


short CountLetters(string str,char ch)
{
    short Counter = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            Counter++;
        }
        
    }
    return Counter;
}
int main()
{
   system("cls");

    string str = ReadString();

    char ch = ReadChar();

    cout<<"Letters \'"<<ch<<"\' Count = ";
    cout<<CountLetters(str, ch)<<endl;
    
    system("pause");
    return 0;
}