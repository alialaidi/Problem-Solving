#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>


using namespace std;


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayWithRandomNumber(int array[3][3], short Rows, short Cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            array[i][j] = RandomNumber(1, 100);
        }
        
    }

}


int SumOfTheCols(int arr[3][3], short Rows, short Cols)
{
    
        int Sum = 0;

        for (short i = 0; i < Rows ;i++)
        {
            Sum += arr[i][Cols];
        }
        return Sum;
   
    
}


void PrintSumOfTheCols(int arr[3][3], short Rows, short Cols)
{
    cout << "\n\nThe Following Are The Cols Of Each Row In The Matrix : \n";
    for (short i = 0; i < Cols; i++)
    {
        cout << " Cols " << i + 1 << " Sum = " << SumOfTheCols(arr,Rows,i)<<endl;
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
    int arr[3][3];

    FillArrayWithRandomNumber(arr, 3, 3);

    cout << "\nThe Following Is a 3x3 Random Matrix :  \n";
    PrintMatrix(arr, 3, 3);

    
    PrintSumOfTheCols(arr,3,3);

    cout<<endl;
    return 0;

}