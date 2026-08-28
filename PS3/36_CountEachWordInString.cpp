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

short CountEachWordInString(string str)
{
    short Counter = 0;
    string delim = " ";
    short pos = 0;
    string sWord;

    while ((pos = str.find(delim))!= string::npos)
    {
        sWord = str.substr(0, pos);

        if (sWord != "")
        {
            Counter++;
        }
         

        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        Counter++;
    }

    return Counter;
 
    
}

int main()
{
    system("cls");


    string str = ReadString();
    cout<<"\n\nThe Number Of Words In Your String = ";
    cout<<CountEachWordInString(str)<<endl;

    return 0;
}