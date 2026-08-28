#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
    int Number = rand() % (to - from + 1) + from;

    return Number;
}

void ReadElementArray(int arr[100], int short& arrLength)
{
    cout << "how many Element do you want to read?\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
       arr[i] = RandomNumber(1, 100);
    }
}
void PrintElementArray(int arr[100], short int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    short int arrLength;
    ReadElementArray(arr, arrLength);
    cout << "original Array: ";
    PrintElementArray(arr, arrLength);
    return 0;
}
