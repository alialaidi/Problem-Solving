#include <iostream>
#include <cctype>
#include <string>
using namespace std;


char ReadChar()
{
    char ch;
    cout << "Please Enter Your Character : ";
    cin>>ch;
    return ch;

}

bool IsVowel(char ch)
{
    ch = tolower(ch);

    return ((ch == 'a')||(ch == 'o')||(ch == 'u')||(ch == 'i')||(ch == 'e'));
}

int main()
{
    system("cls");

    
    char ch = ReadChar();
    if (IsVowel(ch))
    {
        cout << "Yes : Letter \'"<<ch<<"\' Is Vowel." << endl;
    }
    else 
    {
        cout << "No : Letter \'"<<ch<<"\' Is Not Vowel." << endl;
    }
    
}