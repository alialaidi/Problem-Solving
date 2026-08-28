#include <iostream>

using namespace std;

struct stNames
{
    string FirstName;
    string LastName;
};

stNames ReadName()
{
    stNames name;
    cout << "Enter first name: ";
    cin >> name.FirstName;
    cout << "Enter last name: ";
    cin >> name.LastName;

    return name;
}

string  GetFullName(stNames name)
{
    string FullName;
    FullName = name.FirstName + " " + name.LastName;
    return FullName;
}

void PrintFullName(string FullName)
{
    cout <<"\n Your Full Name Is : "<<FullName<<endl;
}

int main()
{
    PrintFullName(GetFullName(ReadName()));

    return 0;
}
