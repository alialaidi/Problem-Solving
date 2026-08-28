#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void FillMatrixWithTransposedOrderedNumbers(int arr[3][3],int arrTransposed[3][3],short Rows,short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            
            arrTransposed[i][j] = arr[j][i];
        }
        
    }
}


void FillMatrixWithOrderedNumbers(int arr[3][3],short Rows,short Cols)
{
    short Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
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
    int arr[3][3],arrTransposed[3][3];
    FillMatrixWithOrderedNumbers(arr, 3, 3);

    cout<<"\nThe Following Is a 3x3 Ordered Matrix\n";
    PrintMatrix(arr, 3, 3);

    FillMatrixWithTransposedOrderedNumbers(arr,arrTransposed, 3, 3);
    cout<<"\n\nThe Following Is The Transposed Matrix\n";
    PrintMatrix(arrTransposed, 3, 3);

    return 0;
}