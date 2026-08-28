#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

short ReadPositiveNumber(string Message)
{
    short Number = 0;
    do
    {
        cout << Message << " : ";
        cin >> Number;
    } while (Number <= 0);

    return Number;  
}


void FillArrayWithRandomNumber(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }

    }

}


short CountNumberInMatrix(int arr[3][3],short Number, short Rows, short Cols)
{
    short count = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
            {
                count++;
            }
        }
    }
    return count;
}


void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << "\n";
    }

}


int main()
{

    system("cls");
    
    srand((unsigned)time(NULL));
    int arr[3][3];

    FillArrayWithRandomNumber(arr, 3, 3);
  
    

    cout <<"Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    short number = ReadPositiveNumber("Enter a number to count");
    
    short count = CountNumberInMatrix(arr, number, 3, 3);
    
    cout << "\nNumber "<<number<<" Count is Matrix = "<<count<<endl;
    


    return 0;

}