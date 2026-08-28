#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>



using namespace std;

enum enPrimeNotPrime{ Prime = 1 , NotPrime = 2} ;
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
    {
        array[i] = RandomNumber(1,100);

    }
    
}


void CopyOnlyPrimeNumbers(int arr[100],int arr2[100],int arrLength,int& arr2Length)
{
    int Counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
       if(CheckPrime(arr[i]) == enPrimeNotPrime::Prime)
       {
        arr2[Counter]=arr[i];
        Counter++;

       }
    }
    arr2Length = --Counter;
    
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
    int arr[100],arr1Length;
    
    
    FillArrayWithRandomNumber(arr,arr1Length);

    int arr2[100], arr2Length = 0;
    cout<<"The Element's OF Array 1 is  : ";
    PrintArray(arr,arr1Length);

    CopyOnlyPrimeNumbers(arr,arr2,arr1Length,arr2Length);

    cout<<"\nThe Prime Number Of Array 2 Of Copy  : ";
    PrintArray(arr2,arr2Length);
    cout<<endl;
    return 0;
}