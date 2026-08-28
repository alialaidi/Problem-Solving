#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout<<"\nEnter Your Pin Code : ";
    cin>>PinCode;
    return PinCode;
}

bool Login()
{
    string PinCode;

    do
    {
    PinCode = ReadPinCode();

    if (PinCode == "1234")
    {
        return 1;
    }
    else 
    {
        cout<<"\nWrong PIN";
        system("color 4F");
    }
    

    }while (PinCode != "1234");
   
}

int main ()
{
    if (Login())
    {
        system("color 2F");
        cout<<"\nYour Account Balance = "<<7500<<'\n';
    };
    return 0;
}
