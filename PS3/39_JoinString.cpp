#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;


string JoinString(vector <string> vString,string delim)
{
    string str="";
    for (string& i : vString)
    {
        str += i + delim;
    }
    
    return str.substr(0,str.length()-delim.length());
}


int main()
{
    system("cls");
    vector <string> vString = {"Mohammed","Ali","Fadi","Lama"};

    cout<<"\n\nVector After Join : \n"<<JoinString(vString,",");

    return 0;
}