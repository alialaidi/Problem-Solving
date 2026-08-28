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
            arr[i][j] = RandomNumber(0, 1);
        }

    }

}


bool Identity2Matrices(int arr[3][3],short Rows, short Cols)
{
    int FirstDiagElement = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i==j && arr[i][j] != FirstDiagElement )
            {
                return false;
            }
            else if (i!=j && arr[i][j] != 0)
            {
                return false;
            }
        }
        
    }
    return true;
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
    int arr[3][3]={{9,0,0},{0,9,0},{0,0,9}};
    //int arr[3][3]={{1,0,0},{0,1,0},{1,0,1}};

    cout <<"Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    if (Identity2Matrices(arr,3,3))
    {
        cout << "\nYes : Matrix is a Scalar Matrix.\n";
    }
    else 
    {
        cout << "\nNo : Matrix is Not a Scalar Matrix.\n";
    }
    

   
    


    return 0;

}