#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayWithRandomNumber(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }

    }

}


bool IsNumberExistInMatrix(int arr[3][3],short Number, short Rows, short Cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
            {
                return true;
            }
        }
    }
    return false;
}


int MaxNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
    int Max = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] > Max)
            {
                Max = arr[i][j];
            }
        }
    }  
    return Max;
}


int MinNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
    int Min = 0;
    Min = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] < Min)   
            {
                Min = arr[i][j];
            }
        }
    }
    return Min;
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
    int arr[3][3],arr2[3][3];

    FillArrayWithRandomNumber(arr, 3, 3);
    

    cout <<"Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    cout << "\n\nMinimum Number In Matrix = "<<MinNumberInMatrix(arr,3,3)<<"\n";
    cout << "\n\nMaximum Number In Matrix = "<<MaxNumberInMatrix(arr,3,3)<<"\n";

    return 0;

}