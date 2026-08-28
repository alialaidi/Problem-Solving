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


string ReverseWordsInString(string str)
{
    vector <string> vWords;
    string reversedStr = "";

    vWords = vSplitFunc(str, " ");

    vector <string>::iterator iter = vWords.end();

    while (iter!= vWords.begin())
    {
        --iter;
        reversedStr += *iter+" ";
    }

    reversedStr = reversedStr.substr(0, reversedStr.length()-1);

    return reversedStr;

}


int main()
{
    system("cls");

    string str = ReadString();
    cout << "\n\nString After Reversing Words : ";
    cout << "\n" << ReverseWordsInString(str) << "\n";

    system("pause");

    return 0;
}