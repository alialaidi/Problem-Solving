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


void PrintResult (int Age)
{
    if (ValidateNumberInRange(Age,18,25))
        cout << "Is a Valid Age"<<endl;
    else
    
        cout << "Is Invalid Age"<<endl;
}

int main()
{
    PrintResult(ReadAge());

    return 0;
}
