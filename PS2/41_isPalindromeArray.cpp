#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

void FillElementArray(short arr[100], short& arrLength)
{
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
	
}

void PrintArrayElement(short arr[100], short arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
bool isPalindromArray(short arr[100], short arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
		{
			return false;
		};
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	srand((unsigned)time(NULL));

	short arr[100]; short arrLength = 0;
	FillElementArray(arr, arrLength);

	cout << "\nArray Element: ";

	PrintArrayElement(arr, arrLength);
	if (isPalindromArray(arr, arrLength))
	{
		cout << "Yes, it's a Palindrome Array\n";
	}
	else
		cout << "No, it's Not a Palindrom Array\n";
	

	return 0;
}

