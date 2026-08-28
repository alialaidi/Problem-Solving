#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void WordFromAAAtoZZZ()
{
    string word = " ";
    for (int i = 65; i <= 90; i++)
    {
        for (int a = 65; a <= 90; a++)
        {
            for (int b = 65; b <= 90; b++)
            {
                word = word + char(i);
                word = word + char(a);
                word = word + char(b);

                cout << word<<endl;
                word = " ";
                
            }
        }
        cout << endl;
    }
}


int main()
{
    WordFromAAAtoZZZ();
    return 0;
}
