#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;

enum enPrimeNotPrime{ Prime = 1 , NotPrime = 2} ;

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


void AddArrayElement(int Number,int arr[100],int& arrLength)
{
    arrLength++;
    arr[arrLength-1] = Number;
}


enPrimeNotPrime CheckPrime (int Number)
{
    int M = round(Number/2);
    for (int i = 2; i <= M; i++)
    {
        if(Number % i == 0)
            return enPrimeNotPrime::NotPrime;
        
    }
    return enPrimeNotPrime::Prime;
    
}

void CopyPrimeNumberToNewArray(int arr[100],int arr2[100],int arrLength,int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
       if(CheckPrime(arr[i])==enPrimeNotPrime::Prime)
            AddArrayElement(arr[i],arr2,arr2Length);
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
    int arr[100],arr2[100],arr1Length = 0,arr2Length = 0;
    
    FillArrayWithRandomNumber(arr,arr1Length);

    CopyPrimeNumberToNewArray(arr,arr2,arr1Length,arr2Length);
    

    cout<<"The Element's OF Array 1 is  : ";
    PrintArray(arr,arr1Length);

    cout<<"\nThe Element's OF Array 2 After Copy  : ";
    PrintArray(arr2,arr2Length);
    cout<<endl;
    return 0;
}