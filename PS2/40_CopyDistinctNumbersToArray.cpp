#include <iostream>


using namespace std;

void FillArray(int arr[100],int& arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;

}

void AddArrayElement(int Number,int arr[100],int& arrLength)
{
    arrLength++;
    arr[arrLength-1] = Number;
}
short FindNumberPositionInArray(int Number,int arr[100],int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if(arr[i]==Number)
        {
            return true;
        }
        
    }
    return -1;
}
bool IsNumberInArray(int Number,int arr[100],int arrLength)
{
    return FindNumberPositionInArray(Number,arr,arrLength) != -1;
    
}

void CopyDistinctNumbersToArray(int arr[100],int arr2[100],int arr1Length,int& arr2Length)
{
    for (int i = 0; i < arr1Length; i++)
    {
        if(!IsNumberInArray(arr[i],arr2,arr2Length))
        {
            AddArrayElement(arr[i],arr2,arr2Length);
        }
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
    int arr[100],arr2[100],arr1Length=0,arr2Length=0;
    FillArray(arr,arr1Length);

    cout<<"The Element's OF Array 1 is  : ";
    PrintArray(arr,arr1Length);

    CopyDistinctNumbersToArray(arr,arr2,arr1Length,arr2Length);

    cout<<"\nThe Element's OF Array 2 After Copy  : ";
    PrintArray(arr2,arr2Length);
    cout<<endl;

    return 0;
}