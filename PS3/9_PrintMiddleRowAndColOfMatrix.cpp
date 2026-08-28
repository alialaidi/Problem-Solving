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
void PrintMiddleRowOfTheMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows/2;
    for (short j = 0; j < Cols; j++)
    {
        printf(" %0*d    ", 2, arr[MiddleRow][j]);
    }
    cout << "\n";

}


void PrintMiddleColsOfTheMatrix(int arr[3][3], short Rows, short Cols)
{
    short MiddleCols = Cols/2;
    for (short i = 0; i < Rows; i++)
    {
        printf(" %0*d    ", 2, arr[i][MiddleCols]);
    }
    cout << "\n";
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

/*
void MiddleRowOfTheMatrix(int arr[3][3],int arr2[3], short Rows, short Cols)
{
    
    
    for (short j = 0; j < Cols; j++)
    {
        arr2[j]=arr[Rows-2][j];
    }
        
   
}


void MiddleColsOfTheMatrix(int arr[3][3],int arr2[3], short Rows, short Cols)
{
    
    for (short j = 0; j < Rows; j++)
    {
        arr2[j]=arr[j][Cols-2];
        
    }
}


void PrintArray(int arr[3], short Rows, short Cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d    ", 2, arr[i]);
        }
       
       
    }
    cout<<"\n";
}
*/

int main()
{
    system("cls");

    srand((unsigned)time(NULL));
    int arr[3][3];

    FillArrayWithRandomNumber(arr, 3, 3);
    cout << "Original Matrix  :\n";
    PrintMatrix(arr, 3, 3);

    cout << "\n";

    
    cout << "Middle Row  :\n";
    PrintMiddleRowOfTheMatrix(arr, 3, 3);

    cout << "\n";

    
    cout << "Middle Cols :\n";
    PrintMiddleColsOfTheMatrix(arr, 3, 3);

    return 0;
}