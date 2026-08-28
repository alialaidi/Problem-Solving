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
            arr[i][j] = RandomNumber(0, 1);
        }

    }

}


/*
bool SparceMatrix(int arr[3][3], short Rows, short Cols)
{
    short CountZero=0;
    short CountNumber=0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == 0)
            {
                CountZero++;
            }
            else 
            {
                CountNumber++;
            }
            
        }
    }

    if (CountZero >= CountNumber)
    {
        return true;
    }
    else if(CountZero < CountNumber)
    {
        return false;
    }
    
    
}
*/


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


bool SparceMatrix(int arr[3][3], short Rows, short Cols)
{
    short MatrixSize = Rows * Cols;

    return (CountNumberInMatrix(arr,0,3,3) >= (MatrixSize/2));
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
    int arr[3][3]={{0,0,12},{0,0,1},{0,0,9}};

    //FillArrayWithRandomNumber(arr, 3, 3);
  
    

    cout <<"Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    
    if (SparceMatrix(arr, 3, 3))
    {
        cout <<"\nYes : It's a Sparce Matrix \n";
    }
    else 
    {
        cout <<"\nNo : It's not a Sparce Matrix \n";
    }
    

    return 0;

}