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
void FillArrayWithRandomNumber(int array[100],int &arrlength)
{
    cout<<"Enter the Number of the Element's: ";
    cin>>arrlength;
    for (int i = 0; i < arrlength; i++)
    {
        array[i] = RandomNumber(1,100);
    }
    
}
short FindNumberPositionInArray(int arr[100],int arrLength,int Number)
{
    for (int i = 0; i < arrLength; i++)
    {
        if(arr[i]==Number)
        {
            return i;
        }
        
    }
    return -1;
}

void PrintArray(int arr[100],int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" "; 
    }

}


bool IsNumberInArray(int arr[100],int arrLength,int Number)
{
    return FindNumberPositionInArray(arr,arrLength,Number) != -1;
    
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],Length ;

    FillArrayWithRandomNumber(arr,Length);

    cout<<"The Element's is : ";
    PrintArray(arr,Length);

    int Number = ReadPositiveNumber("\nPlease Enter a Number To Search For");

    cout<<"\nNumber You Are Looking For Is : "<<Number<<endl;



    if (IsNumberInArray(arr,Length,Number))
    cout<<"\nYes,The Number Is Found :-)\n";
    else
    {
    cout <<"\nNo,The Number Is Not Found  :-( \n";
    }


    return 0;
    
}