#include<iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadNumber(string Text)
{
	int Number;
	cout << Text << endl;
	cin >> Number;
	return Number;
}
int MyAbs(int Number)
{
	if (Number >= 0)
		return Number;
	else
		return Number * -1;
}

int main()
{
	int Number= ReadNumber("Please enter Number?");
	cout << "My ABS is : " << MyAbs(Number) << endl;
	cout << "C++ ABS is: " << abs(Number) << endl;
	
	return 0;
}


