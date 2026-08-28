#include <iostream>
#include <string>
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

int main()
{
    system("CLS");  // Clear Screen


    cout << "\t\tWelcome to Banking System\n\n" << endl;
    sClint Client ; 
    Client = ReadNewClint();

    cout<<"\n\nClient Record For Saving Is : \n";
    cout<<ConvertRecordToLine(Client, "#//#");


    return 0;
}