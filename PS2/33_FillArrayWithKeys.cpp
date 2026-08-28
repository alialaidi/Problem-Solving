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

enum enCharType {SmallLetter= 1,CapitalLetter= 2,SpicialCharacter= 3,Digit= 4};

char GetRandomCharacter(enCharType CharType)
{
switch (CharType){
    case enCharType::SmallLetter :
        return char(RandomNumber(97,122));
        break;
    case enCharType::CapitalLetter :
        return char(RandomNumber(65,90));
        break;
    case enCharType::SpicialCharacter :
        return char(RandomNumber(33,47));
        break;
    case enCharType::Digit :
        return char(RandomNumber(48,57));
        break;
    default:
        return char(RandomNumber(97,122));
        break;
}
}

string GenerateWord(enCharType CharType,short Length)
{
    string Word;
    for (int i = 1; i < Length; i++)
    {
        Word += GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey()
{
    string key;
    key = GenerateWord(enCharType::CapitalLetter, 4)+"-";
    key +=GenerateWord(enCharType::CapitalLetter, 4)+"-";
    key +=GenerateWord(enCharType::CapitalLetter, 4)+"-";
    key +=GenerateWord(enCharType::CapitalLetter, 4);

    return key;

}

void FillArrayWithKeys(short NumberOfKey,string arr[100])
{
    for (int i = 0; i <= NumberOfKey; i++)
    {
        arr[i]= GenerateKey();
    }
}
void PrintStringArray(string arr[100],int arrLength)
{
    cout<<"Array Elements : \n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout<<"Array["<<i+1<<"] : "<<arr[i]<<endl; 
    }

}

int main()
{
    
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength = ReadPositiveNumber("Enter the length of the array");
    FillArrayWithKeys(arrLength,arr);

    PrintStringArray(arr,arrLength);

}