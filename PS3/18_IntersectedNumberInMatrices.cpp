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

void IntersectedNumberInMatrices(int arr[3][3],int arr2[3][3], short Rows, short Cols)
{
    short Number;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Number = arr[i][j];
            if(IsNumberExistInMatrix(arr2,Number,3,3))
            {
                cout << setw(3) << Number << "    ";
            }
        }

    }
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
    FillArrayWithRandomNumber(arr2, 3, 3);
    

    cout <<"Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);
    
    cout <<"\nMatrix 2 : \n";
    PrintMatrix(arr2, 3, 3);



    cout <<"\nIntersected Numbers : \n";
    IntersectedNumberInMatrices(arr,arr2,3,3);

    return 0;

}