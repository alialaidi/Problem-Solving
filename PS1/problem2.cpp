#include <iostream>
#include <string>

using namespace std;

string readName()
{
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    return name;
    
}
void print(string name)
{
    cout<<"\nYour Name is : "<<name<<endl;
}

int main()
{
    print(readName());
    
    return 0;
}