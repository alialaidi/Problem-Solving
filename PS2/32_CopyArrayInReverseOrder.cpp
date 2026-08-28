#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int RandomNumber(int From,int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumber(int array[100],int &arrlength)
{
    cout<<"Enter the Number of the Element's: ";
    cin>>arrlength;
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

void CopyArray(int arr[100],int arr2[100],int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
        arr2[i] = arr[arrLength-1-i];
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arr2[100],Length;
    
    FillArrayWithRandomNumber(arr,Length);
    
    CopyArray(arr,arr2,Length);

    cout<<"The Element's OF Array 1 is  : ";
    PrintArray(arr,Length);

    cout<<"\nThe Element's OF Array 2 After Copy  : ";
    PrintArray(arr2,Length);
    cout<<endl;
    return 0;
}