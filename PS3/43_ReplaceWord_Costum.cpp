#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;


string ReadString(string Messsge)
{
    string str;
    cout << Messsge;
    getline(cin, str);
    return str;

}


string ReplaceWordInStringUsingBuiltInFunction(string str,string StringToReplace,string sReplaceTo)
{
    short Pos = str.find(StringToReplace);

    while (Pos!= string::npos) {
        str.replace(Pos, StringToReplace.length(), sReplaceTo);
        Pos = str.find(StringToReplace);
    }
    return str;
}


vector <string> vSplitFunc(string str,string delim)
{
    short pos = 0;
    vector <string> vString;
    string sWord;

    while ((pos = str.find(delim))!= string::npos)
    {
        sWord = str.substr(0, pos);

        if (sWord != "")
            vString.push_back(sWord);
 
         

        str.erase(0, pos + delim.length());
    }
    if (str != "")
        vString.push_back(str);

    return vString;
    
}


string LowerAllString(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str[i]=tolower(str[i]);
        }
        
    }
    return str;
}

string JoinString(vector <string> vString,string delim)
{
    string str="";
    for (string& i : vString)
    {
        str += i + delim;
    }
    
    return str.substr(0,str.length()-delim.length());
}


string ReplaceWordInStringUsingSplit(string str , string StringToReplace , string sReplaceTo,bool MatchCase)
{
    vector <string> vString = vSplitFunc(str," ");

    for(string& s:vString)
    {
        if(MatchCase)
        {
            if(s == StringToReplace)
            s = sReplaceTo;
        }
        else
        {
            if(LowerAllString(s) == LowerAllString(StringToReplace))
            s = sReplaceTo;
        }
    }

    return JoinString(vString," ");
}


int main()
{
    system("cls");

    string str = ReadString("Please Enter Your String : \n");
    string StringToReplace = ReadString("Enter The String You Want To Replace : \n");
    string sReplaceTo = ReadString("Enter The String Replace : \n");

    cout<<"\nOriginal String \n"<<str;

    cout<<"\n\nString After Replace using Built in Function : \n";
    cout<<ReplaceWordInStringUsingBuiltInFunction(str,StringToReplace,sReplaceTo);
    
    cout<<"\n\nString After Replace using Match Costum Function : \n";
    cout<<ReplaceWordInStringUsingSplit(str,StringToReplace,sReplaceTo,true);
    
    cout<<"\n\nString After Replace using Not Match Costum Function : \n";
    cout<<ReplaceWordInStringUsingSplit(str,StringToReplace,sReplaceTo,false)<<endl;
    
    
    
    
    
    return 0;
}