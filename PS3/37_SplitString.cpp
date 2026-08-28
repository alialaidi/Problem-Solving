#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
    string str;
    cout << "Please Enter Your String : \n";
    getline(cin, str);
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


int main()
{
    system("cls");
    vector <string> vString;
    vString = vSplitFunc(ReadString()," ");

    cout<<"\n\nTokens = "<<vString.size()<<endl;

    for (string& Words : vString)
    {
        cout<<Words<<endl;
    }
    
    

    return 0;
}