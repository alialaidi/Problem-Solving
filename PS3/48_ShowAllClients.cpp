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


sClint ReadNewClint()
{
    cout << "Enter new client details : \n" << endl;
    sClint newClint;

    cout << "Enter Account Number: ";
    getline(cin >> ws, newClint.AccountNumber); // ws -> White Spaces
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


string ConvertRecordToLine(sClint Clint , string Separator)
{
    string stClientRecord = "";
    stClientRecord += Clint.AccountNumber + Separator;
    stClientRecord += Clint.PinCode + Separator;
    stClientRecord += Clint.Name + Separator;
    stClientRecord += Clint.PhoneNumber + Separator;
    stClientRecord += to_string(Clint.AccountBalance);

    return stClientRecord;
}


void AddDateLineToFile(string FileName , string stDateLine)
{
    fstream MyFile;

    MyFile.open(FileName , ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile<<stDateLine<<endl;

        MyFile.close();    
    }

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


void PrintClientRecord(sClint Client)
{
    cout << " | " << left << setw(15) << Client.AccountNumber;
    cout << " | " << left << setw(10) << Client.PinCode;
    cout << " | " << left << setw(30) << Client.Name;
    cout << " | " << left << setw(12) << Client.PhoneNumber;
    cout << " | " << left << setw(12) << Client.AccountBalance;
}


void PrintAllClientsData(vector <sClint> vClients)
{
    cout<<"\n\t\t\t\t\tClient List ( "<< vClients.size()<<" ) Client(s).";
    cout<<"\n_______________________________________________________";
    cout << "_________________________________________\n";

    cout << " | " << left << setw(15) << "Accout Number";
    cout << " | " << left << setw(10) << "Pin Code";
    cout << " | " << left << setw(30) << "Name";
    cout << " | " << left << setw(12) << "Phone Number";
    cout << " | " << left << setw(12) << "Accout Balance";
    cout<<"\n_______________________________________________________";
    cout << "_________________________________________\n";

    for(sClint& Client:vClients)
    {
        PrintClientRecord(Client);
        cout<<endl;
    }
    cout<<"_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}


void AddNewClient()
{
    sClint Client;
    Client = ReadNewClint();
    AddDateLineToFile(ClientsFileName,ConvertRecordToLine(Client,"#//#"));
}


void AddiClients()
{
    
    system("CLS");  // Clear Screen

    char AddMore = 'Y';
    do
    {
        AddNewClient();
        cout<<"\n\nDo You Need To Add Another Client [Y] : Yes Or [N] : No  : ";
        cin >> AddMore;
    } while (toupper(AddMore) == 'Y');
    
}


int main()
{
    system("cls");
    vector <sClint> vClients = LoadClientsDataFromFile(ClientsFileName);
    PrintAllClientsData(vClients);


    return 0;
}