#include <iostream>

using namespace std;

struct stInfo
{
    int Age;
    bool HasDriverLicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout<<"Enter Your Age Please : ";
    cin>>Info.Age;
    cout<<"Do You Have Driver's License? (Y=1/N=0) : ";
    cin>>Info.HasDriverLicense;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age>21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
    cout<<"\n Hired \n";
    else
    cout<<"\n Rejected \n";
}

void ibrahimtaleb()
{
    string x,y;
    cin>>x;
    cin>>y;
    cout<<x<<endl;
    cout<<y<<endl;
}

int main()
{
    ibrahimtaleb();
    

    return 0;
}
