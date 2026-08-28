#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadAge()
{
    int Age;
    cout << "Please enter your age: ";
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Number,int From,int To)
{
    return (Number >= From && Number <= To);
}
int ReadUntilAgeBetweeb(int From,int To)
{
    int Age=0;
    do
    {
        Age = ReadAge();
    }
    while (!ValidateNumberInRange(Age,From,To));
    
    return Age;
}

void PrintResult (int Age)
{
    if (ValidateNumberInRange(Age,18,45))
        cout << "Is a Valid Age"<<endl;
    else
        cout << "Is Invalid Age"<<endl;
}

int main()
{
    PrintResult(ReadUntilAgeBetweeb(18,45));

    return 0;
}
