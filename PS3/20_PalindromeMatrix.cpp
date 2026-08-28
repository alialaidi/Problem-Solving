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

bool IsPalindromeMatrix(int arr[3][3],short Rows, short Cols)
{
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] != arr[i][Cols - 1 - j])
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
    int arr[3][3]={{1,2,1},{5,5,5},{7,3,7}};

    //FillArrayWithRandomNumber(arr, 3, 3);
    

    cout <<"Matrix 1 : \n";
    PrintMatrix(arr, 3, 3);

    if (IsPalindromeMatrix(arr,3,3))
    {
        cout<< "\n\nYes : Matrix Is Palindrome\n";
    }
    else 
    {
        cout<< "\n\nNo : Matrix Is Not Palindrome\n";
    }
    

    return 0;

}