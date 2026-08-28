#include <iostream>
#include <cctype>
#include <string>
using namespace std;


char ReadChar()
{
    char ch;
    cout << "Please Enter Your String : ";
    cin>>ch;
    return ch;

}

char InvertLetterCase(char c)
{
    return (isupper(c))? tolower(c) : toupper(c);
}


/*
char UppercaseChar(char c)
{
    return toupper(c);
}


char LowercaseChar(char c)
{
    return tolower(c);
}


void PrintInvertChar(char c)
{

    cout<<"\nChar After Interting Casr : ";
    if (c >= 'a' && c <= 'z')
    {
        cout <<UppercaseChar(c)<<endl;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << LowercaseChar(c)<<endl;
    }
}

*/


int main()
{
   system("cls");

    char ch = ReadChar();
    //PrintInvertChar(ch);
    cout<<"\nChar After Interting Casr : ";
    cout<<InvertLetterCase(ch)<<endl;
    
    
    return 0;
}