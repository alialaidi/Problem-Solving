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

    short number = ReadPositiveNumber("\nPlease Enter The Number To Look For In Matrix");
    
    if (IsNumberExistInMatrix(arr, number,3,3))
    {
        cout << "\nNumber " << number << " exist in the matrix.\n";
    }
    else
    {
        cout << "\nNumber " << number << " does not exist in the matrix.\n";
    }
    


    return 0;

}