#include <iostream>

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

void ReadArray(int arr[100],int &arrLength)
{
    cout<<"Enter the length of the array: ";
    cin>>arrLength;
   
    for(int i=0;i<arrLength;i++)
    {
        cout<<"Element ["<<i+1<<"] : ";
        cin>>arr[i];
    }

}
void PrintArray(int arr[100],int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }

}
int TimesRepeated(int Number,int arr[100],int arrLength)
{
   int count = 0;

   for(int i=0;i<=arrLength;i++){
    if (Number == arr[i])
    {
        count++;
    }
   }
   return count;
}
int main()
{
    int arr[100],arrLength,NumberToChick;

    ReadArray(arr,arrLength);
    NumberToChick = ReadPositiveNumber("Enter The Number You Want To Check");
    
    PrintArray(arr,arrLength);
    cout<<"\n";

    cout<<"Digit "<<NumberToChick<<" frequncy is "<<TimesRepeated(NumberToChick,arr,arrLength)<<" Time(s)."<<endl;

    
    return 0;
}