#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << " : ";
        cin >> Number; 
    } while (Number < 0 );


    return Number;
}

void AddArrayElement(int Number,int arr[100],int &arrLength)
{
    arrLength++;
    arr[arrLength-1] = Number;
}

void InputUserNumbersInArray(int arr[100],int &arrLength)
{
    bool AddMore = true;

    do
    {
        AddArrayElement(ReadPositiveNumber("Enter a number"),arr,arrLength);

        cout << "Do you want to add more numbers? [0]:No , [1]:Yes : ";
        cin >> AddMore;

    } while (AddMore);
    
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
    int arr[100];
    int arrLength = 0;

    InputUserNumbersInArray(arr,arrLength);

    cout<<"\nArray Length : "<<arrLength<<endl;
    cout<<"Array Element's : ";
    PrintArray(arr,arrLength);

    return 0;
}