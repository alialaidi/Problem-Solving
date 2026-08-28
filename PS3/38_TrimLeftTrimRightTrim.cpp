#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;


string TrimRight(string str)
{
    for (short i = str.length()-1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            return str.substr(0, i+1);
        }
        
    }
    return "";
}


string TrimLeft(string str)
{
    for (short i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            return str.substr(i, str.length() - i);
        }
        
    }
    return "";
    
}
string TrimFunc(string str)
{
    return (TrimLeft(TrimRight(str)));
}

int main()
{
    string str = "     @ali.alaidi_Official     ";
    cout << "\nString : " << str;
    cout << "\n\nTrim Left : " << TrimLeft(str);
    cout << "\nTrim Right : " << TrimRight(str);
    cout << "\nTrim : " << TrimFunc(str);
   
    return 0;
}