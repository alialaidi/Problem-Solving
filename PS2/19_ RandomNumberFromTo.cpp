#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <cmath>
using namespace std;

int RandomNumber(int from, int to)
{
    int Number = rand() % (to - from + 1) + from;
    return Number;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(1, 20) << endl;
    cout << RandomNumber(1, 20) << endl;
    cout << RandomNumber(1, 20) << endl;
 
    return 0;
}
