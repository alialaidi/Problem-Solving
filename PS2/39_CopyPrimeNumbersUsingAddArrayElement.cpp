#include<iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime };
int RandomNumber(int from, int to)
{
	int Number = rand() % (to - from + 1) + from;
	return Number;
}
enPrimeNotPrime checkPrimeNumbers(int Number)
{
	//prime numbers from 1 to 100 are: 2, 3, 5, 7, 11, 13, 17, 19, 23,
	// 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97

	short int M = floor(Number / 2);
	if (Number <= 1)
		return enPrimeNotPrime::NotPrime;
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;
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
void CopyPrimeNumbers(short arr[100], short arr2[100], short arrLength, short& arr2Length)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (checkPrimeNumbers(arr[i])==enPrimeNotPrime::Prime)
		{
			addArrayElement(arr[i], arr2, arr2Length);
		}
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
	CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 2 Prime Numbers: ";
	PrintElementArray(arr2, arr2Length);

	return 0;
}


