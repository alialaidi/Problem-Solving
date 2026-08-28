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

void PrintArray(int arr[100],int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" "; 
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
short FindNumberOrderInArray(int arr[100],int arrLength,int Number)
{
    for (int i = 0; i < arrLength; i++)
    {
        if(arr[i]==Number)
        {
            return i+1;
        }   
    }
    return -1;
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


    short NumberOfPosition = FindNumberPositionInArray(arr,Length,Number);
    short NumberOfOrder = FindNumberOrderInArray(arr,Length,Number);

    if (NumberOfPosition == -1)
    cout <<"\nThe Number Is Not Found  :-( \n";
    else
    { 
    cout<<"\nThe Number Found At Position : "<<NumberOfPosition<<endl;
    cout<<"\nThe Number Found It's Order : "<<NumberOfOrder<<endl;
    }


    return 0;
    
}