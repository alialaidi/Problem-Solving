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
void Swap(int &A,int &B)
{
    int Temp ;
    Temp = A;
    A = B;
    B = Temp;
}

int RandomNumber(int From,int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWith1tiN(int arr[100],int Length)
{
    for (int i = 0; i < Length; i++)
    {
        arr[i] = i+1;
    }
    
}

void ShuffleArray(int arr[100],int Length)
{
    for (int i = 0; i < Length; i++)
    {
       Swap(arr[RandomNumber(1,Length)-1],arr[RandomNumber(1,Length)-1]); 
    }
    
}
void PrintArray(int arr[100],int arrLength)
{
    

    for (int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" "; 
    }

}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("Enter The Length Of Array");

    FillArrayWith1tiN(arr,arrLength);

    cout<<"\nThe Array Before Shuffle is : ";
    PrintArray(arr,arrLength);

    ShuffleArray(arr,arrLength);

    cout<<"\n\nThe Array After Shuffle is : ";
    PrintArray(arr,arrLength);

    cout<<"\n\n";

    return 0;
}