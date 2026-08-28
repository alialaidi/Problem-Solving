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

    int Counter=3;
    do
    {
    Counter--;
    PinCode = ReadPinCode();

    if (PinCode == "1234")
    {
        return 1;
    }
    else 
    {
        system("color 4F");
        cout<<"\nWrong PIN , You Have "<<Counter <<" More Tries!";
    }
    }while (PinCode != "1234" && Counter > 0);

    return 0 ;
   
}

int main ()
{
    if (Login())
    {
        system("color 2F");
        cout<<"\nYour Account Balance = "<<7500<<'\n';
    }
    else 
    {
        system("color 4F");
        cout<<"\nYour Account Has Been Blocked!"<<endl;
    }
    return 0;
}
