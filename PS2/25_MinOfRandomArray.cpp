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

int MinOfRandomArray(int arr[100],int arrLength)
{
    int min = arr[0];
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],Length ;

    FillArrayWithRandomNumber(arr,Length);

    cout<<"The Element's is : ";
    PrintArray(arr,Length);

    cout<<"\nMin Number is : "<<MinOfRandomArray(arr,Length)<<endl;

    
    return 0;
}