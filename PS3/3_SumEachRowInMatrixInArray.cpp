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


int SumOfTheRows(int arr[3][3], short Rows, short Cols)
{
    
        int Sum = 0;

        for (short j = 0; j < Cols;j++)
        {
            Sum += arr[Rows][j];
        }
        return Sum;
   
    
}


void SumOfTheRowsIn1DArray(int arr2D[3][3],int arr1D[3], short length, short Cols)
{
    for (short i = 0; i < length; i++)
    {
        arr1D[i]=SumOfTheRows(arr2D,i,Cols);
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

void PrintArray(int arr[100],int arrLength)
{
    cout<<"\n\nThe Following Are The Sum Of Each Row In The Matrix : \n";
    
    for (int i = 0; i < arrLength; i++)
    {
        cout << " Row " << i + 1 << " Sum = " << arr[i] <<endl;
    }

}



int main()
{
    system("cls");

    srand((unsigned)time(NULL));
    int arr2D[3][3];

    FillArrayWithRandomNumber(arr2D, 3, 3);

    cout << "\nThe Following Is a 3x3 Random Matrix :  \n";
    PrintMatrix(arr2D, 3, 3);

    
    int arr1D[3];
    SumOfTheRowsIn1DArray(arr2D, arr1D, 3, 3);
    PrintArray(arr1D,3);

    cout<<endl;
    return 0;

}