#include <iostream>

using namespace std;

enum enPassFail { pass=1 , fail=0 };

int ReadMark()
{
    int mark;
    cout << "Enter mark: ";
    cin >> mark;
    return mark;
}

enPassFail CheckMark(int mark)
{
    if (mark >= 50)
        return enPassFail::pass;
    else
        return enPassFail::fail;
}

void PrintResults(int mark)
{
    if (CheckMark(mark)==enPassFail::pass)
    cout<<"\n you Passed "<<endl;
    else 
    cout<<"\n you Failed "<<endl;
}

int main()
{
    PrintResults(ReadMark());

    return 0;
}

