#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << " : ";
        cin >> Number; 
    } while (Number <= 0 );


    return Number;
}
int RandomNumber(int From,int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumber(int array[100],int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        array[i] = RandomNumber(1,100);
    }
    
}

void PrintArray(int arr[100],int arrLength)
{
    

    for (int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" "; 
    }

}

void SumOfRandom2Array(int arr[100],int arr2[100],int arrSum[100],int arrLength)
{
    arrSum[0] = 0;
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i]=arr[i]+arr2[i];
    }   

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arr2[100],arrSum[100];
    int Length = ReadPositiveNumber("Enter The Value Of Length");

    FillArrayWithRandomNumber(arr,Length);
    FillArrayWithRandomNumber(arr2,Length);

    SumOfRandom2Array(arr,arr2,arrSum,Length);


    cout<<"\nThe Element's Of Array 1 is : ";
    PrintArray(arr,Length);

    cout<<"\nThe Element's Of Array 2 is : ";
    PrintArray(arr2,Length);

    cout<<"\nThe Sum of the Array 1 + Array 2 is : ";
    PrintArray(arrSum,Length);
    

    

    return 0;
}