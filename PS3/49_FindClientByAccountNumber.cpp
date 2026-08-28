#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

const string ClientsFileName = "Clients.txt";


struct sClint{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};


string ReadClientAccountNumber()
{
    string accountNumber="";
    cout << "Enter your account number: ";
    
    cin >> accountNumber;
    return accountNumber;
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

vector <sClint> LoadClientsDataFromFile(string FillName)
{
    vector <sClint> vClients;

    fstream MyFile;
    MyFile.open(FillName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        sClint Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line,"#//#");
            vClients.push_back(Client);
        }
        MyFile.close();
    }

    return vClients;
    
}

bool FindClientByAccountNumber(string accountNumber,sClint& Client)
{
    vector <sClint> vClients = LoadClientsDataFromFile(ClientsFileName);

    for(sClint& C:vClients)
    {
        if (C.AccountNumber == accountNumber)
        {
            Client = C;
            return true;
        }
        
    }
    return false;
}

void PrintClientCard(sClint Client)
{
    cout << "\n\nThe Following client details : \n";

    cout << "\nAccount Number : "<<Client.AccountNumber;
    
    cout << "\nPin Code : "<<Client.PinCode;
   
    cout << "\nName : "<<Client.Name;
    
    cout << "\nPhone Number : "<<Client.PhoneNumber;
    
    cout << "\nAccount Balance : "<<Client.AccountBalance;
}

int main()
{
    system("cls");

    
    string AccountNumber = ReadClientAccountNumber();
    sClint Client;
    if (FindClientByAccountNumber(AccountNumber, Client))
    {
        PrintClientCard(Client);
    }
    else
    {
        cout << "\nThe INFO of Client ( "<<AccountNumber<<" ) Is Not Found!"<<endl;
    }

    return 0;
}