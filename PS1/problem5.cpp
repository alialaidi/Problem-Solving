#include <iostream>

using namespace std;

struct stInfo
{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout<<"Enter Your Age Please : ";
    cin>>Info.Age;
    cout<<"Do You Have Driver's License? (Y=1/N=0) : ";
    cin>>Info.HasDriverLicense;
    cout<<"Do You Have Recommendation? (Y=1/N=0) : ";
    cin>>Info.HasRecommendation;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age>21 && Info.HasDriverLicense ||Info.HasRecommendation );
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
    cout<<"\n Hired \n";
    else
    cout<<"\n Rejected \n";
}

int main()
{
    PrintResult(ReadInfo());

    return 0;
}
