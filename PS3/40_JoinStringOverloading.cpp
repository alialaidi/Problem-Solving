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

string JoinString(string arr[],short arrLength,string delim)
{
    string str="";
    for (short i = 0; i < arrLength; i++)
    {
        str += arr[i] + delim;
    }
   
    
    return str.substr(0,str.length()-delim.length());
}

int main()
{
    system("cls");
    vector <string> vString = {"Mohammed","Ali","Fadi","Lama"};
    string arr[] = {"Mohammed","Ali","Fadi","Lama"};
    cout<<"\n\nVector After Join : \n"<<JoinString(vString," | ");
    cout<<"\n\nArray After Join : \n"<<JoinString(arr,4," | ");
    return 0;
}