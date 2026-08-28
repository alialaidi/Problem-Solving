#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ShowHader()
{
    cout << "**********************************************************************************";
    cout << "\n\n\t\t\tMultiplacation Table From 1 to 100\n\n";
    cout << "**********************************************************************************\n";
}
string Dash(int Number)
{
    if (Number >= 10)
        return " |";
    else
        return "  |";
}
void Multiplacation1To100()
{
    ShowHader();
    system("color f1");
    for (int i = 1; i <= 10; i++)
    {
        cout << i << Dash(i) << "\t";
        for (int a = 1; a <= 10; a++)
        {
            cout << i * a << "\t";
        }
        cout << endl;
    }
    
}

void ibrahimtaleb()
{
    string x,y;
    cin>>x;
    cin>>y;
    cout<<x<<endl;
    cout<<y<<endl;
}
int main() {
    
    ibrahimtaleb();
    
    return 0;
}


