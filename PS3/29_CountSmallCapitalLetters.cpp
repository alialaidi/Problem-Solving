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

short CountCapitelLetters(string str)
{
    short UpperCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            UpperCount++;
        }    
    }
    return UpperCount;
}


short CountSmallLetters(string str)
{
    short LowerCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i]))
        {
            LowerCount++;
        }    
    }
    return LowerCount;
}

int main()
{
   system("cls");

    string str = ReadString();
    cout<<"\nString Length: "<<str.length()<<endl;

    cout<<"\nCount Of Upper Case Letters : ";
    cout<< CountCapitelLetters(str)<<"\n";
    cout<<"\nCount Of Lower Case Letters : ";
    cout<< CountSmallLetters(str)<<"\n";
    

    
    system("pause");
    return 0;
}