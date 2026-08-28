#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
    cout << "\t\tWelcome to Banking System\n\n" << endl;
    AddiClients();

    return 0;
}