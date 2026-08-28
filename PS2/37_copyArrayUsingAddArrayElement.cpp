#include<iostream>
#include <string>
#include <cstdlib>


using namespace std;


int RandomNumber(int from, int to)
{
	int RandNumber = rand() % (to - from + 1) + from;
	return RandNumber;
}

short FillElementArray(short arr[100], short& arrLength)
{
	cout << "How Many Array do you want to create?\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
	return arr[100];
}
void addArrayElement(short Number, short arr[100], short& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}
void copyArrayUsingAddArrayElement(short arr[100], short arr2[100], short arrLength, short& arr2Length)
{
	for (int i = 0; i < arrLength; i++)
	{
		addArrayElement(arr[i], arr2, arr2Length);
	}
}
void PrintElementArray(short arr[100], short arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	short arr[100], arrLength = 0;

	FillElementArray(arr, arrLength);
	cout << "\nArray 1 Elements: ";
	PrintElementArray(arr, arrLength);

	short arr2[100], arr2Length=0;
	copyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);
	cout << "\nArray 2 Elements: ";
	PrintElementArray(arr2, arr2Length);
	return 0;
}


*******************************************************************************
					SECOND REVIEW
					13/01/2024
*******************************************************************************

#include<iostream>
#include <string>


using namespace std;

int ReadPositiveNumber()
{
	int Number;
	do
	{
		cout << "Please enter Number? ";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int RandomNumber(int from, int to)
{
	int Number = rand() % (to - from + 1) + from;
	return Number;
}
void addArrayElement(int Number, short arr[100], short& arrLength)
{
	arr[arrLength] = Number;
	arrLength++;

	/*you can also write code like this:
	arrLength++;
	arr[arrLength-1] = Number;
	*/
}
void FillArrayElementRandomly(short arr[100], short& arrLength)
{
	cout << "how Many Element do you want to Fill?\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
void copyArrayElement(short arr[100], short arr2[100], short int arrLength, short int& arr2Length)
{
	for (int i = 0; i < arrLength; i++)
	{
		addArrayElement(arr[i], arr2, arr2Length);
	}
}
void PrintElementArray(short arr[100], short int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	short arr[100], arrLength = 0;
	FillArrayElementRandomly(arr, arrLength);

	cout << "\nArray 1 Elements: ";
	PrintElementArray(arr, arrLength);

	short arr2[100]; short int arr2Length = 0;
	copyArrayElement(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 2 Elements: ";
	PrintElementArray(arr2, arr2Length);

	return 0;
}





