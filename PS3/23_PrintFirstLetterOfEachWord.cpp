#include <iostream>
using namespace std;

string ReadString()
{
    string str;
    cout << "Please Enter Your String : \n";
    getline(cin, str);
    return str;

}

void PrintFirstLetterInString(string str)
{
    bool IsFirstLetter = true;

    cout<<"\nFirst Letter Of Each Word In String : \n";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && IsFirstLetter)
        {
            cout<<str[i]<<endl;
        }
        IsFirstLetter = (str[i] == ' '? true : false );
    }
    
}

int main()
{
   system("cls");


    PrintFirstLetterInString(ReadString());
   
   
    return 0;
}