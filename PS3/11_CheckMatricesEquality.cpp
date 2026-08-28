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
            arr[i][j] = RandomNumber(1, 10);
        }

    }

}

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }

    }
    return Sum;
}


bool Equality2Matrices(int arr[3][3],int arr2[3][3],short Rows, short Cols)
{
    return (SumOfMatrix(arr,Rows,Cols)==SumOfMatrix(arr2,Rows,Cols));
    
}


void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d    ", 2, arr[i][j]);
        }
        cout << "\n";
    }

}


int main()
{

    system("cls");
    
    srand((unsigned)time(NULL));
    int arr[3][3],arr2[3][3],arrResult[3][3];

    FillArrayWithRandomNumber(arr, 3, 3);
    FillArrayWithRandomNumber(arr2, 3, 3);
    

    cout <<"Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);
    cout << "Matrix 2 : \n";
    PrintMatrix(arr2, 3, 3);

    if (Equality2Matrices(arr,arr2,3,3))
    {
        cout<<"Yes : Matices are equal\n\n";
    }
    else 
    {
        cout<<"No : Matices are not equal\n\n";
    }
    


    return 0;

}