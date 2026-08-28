#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadNumberInRange()
{
    int mark;
    do{
    cout << "Enter Your Mark : ";
    cin >> mark;
   
    }while(mark < 0 || mark > 100);
    return mark;
}

char GetGradeInSymbol(int mark)
{
    switch(mark/10)
    {
        case 10:
        case 9:
            return 'A';
            break;
        case 8:
            return 'B';
            break;
        case 7:
            return 'C';
            break;
        case 6:
            return 'D';
            break;
        case 5:
            return 'E';
            break;
        default:
            return 'F';
            break;
    }

}
int main ()
{
    cout<<"\n Result = "<<GetGradeInSymbol(ReadNumberInRange())<<endl;
    return 0;
}