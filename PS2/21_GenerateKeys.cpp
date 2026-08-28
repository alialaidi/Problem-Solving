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

void GenerateKeys(short NumberOfKey)
{
    for (int i = 1; i <= NumberOfKey; i++)
    {
        cout <<"Key ["<<i<<"] : "<<GenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Please Enter The Number Of Keys"));

}