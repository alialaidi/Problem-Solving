#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int RandomNumber(int From,int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumber(int array[100],int& arrlength)
{
    cout<<"Enter the Number of the Element's: ";
    cin>>arrlength;
    for (int i = 0; i < arrlength; i++)
        array[i] = RandomNumber(1,100);
    
}


int CountOddNumberArray(int arr[100],int arrLength)
{
    int Count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i]%2 != 0)
        {
            Count++;
        }
        
    }
    return Count;
   
    
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
    int arr[100],arr1Length = 0;
    
    FillArrayWithRandomNumber(arr,arr1Length);

    cout<<"The Element's OF Array 1 is  : ";
    PrintArray(arr,arr1Length);

    cout<<"\n\nOdd Number Count is : ";
    cout<<CountOddNumberArray(arr,arr1Length)<<endl;

    cout<<endl;

    
    return 0;
}