#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sClint{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};

sClint ReadNewClint()
{
    cout << "Enter new client details : \n\n" << endl;
    sClint newClint;

    cout << "Enter Account Number: ";
    getline(cin, newClint.AccountNumber);
    cout << "Enter Pin Code: ";
    getline(cin, newClint.PinCode);
    cout << "Enter Name: ";
    getline(cin, newClint.Name);
    cout << "Enter Phone Number: ";
    getline(cin, newClint.PhoneNumber);
    cout << "Enter Initial Account Balance: ";
    cin >> newClint.AccountBalance;
    
    return newClint;
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


sClint ConvertLineToRecord(string Line , string Separator)
{
    sClint Client;
    vector <string> vClientData;

    vClientData = vSplitFunc(Line,Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.PhoneNumber = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);// Cast string to Double

    return Client;
}

void PrintClientRecord(sClint Client)
{
    cout << "\n\nAccount Number : "<<Client.AccountNumber;
    
    cout << "\nPin Code : "<<Client.PinCode;
   
    cout << "\nName : "<<Client.Name;
    
    cout << "\nPhone Number : "<<Client.PhoneNumber;
    
    cout << "\nAccount Balance : "<<Client.AccountBalance;
    
}

int main()
{
    system("CLS");  // Clear Screen


    cout << "\t\tWelcome to Banking System\n\n" << endl;
    string str = "A150#//#1234#//#Ali Al Aidi#//#0790340585#//#5270.000000";

    cout<<"\n\nLine Record Is : \n";
    cout<<str<<endl;


    sClint Client = ConvertLineToRecord(str,"#//#");

    PrintClientRecord(Client);




    return 0;
}