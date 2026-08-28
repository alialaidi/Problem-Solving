#include<iostream>
#include <string>
#include <cstdlib>


using namespace std;

float ReadNumber()
{
	float Number;
	
	cout << "Please enter a float Number? ";
	cin >> Number;
	
	return Number;
}

int MyFloor(float Number)
{
	

	if (Number>0)
	{
			return int(Number);	
	}
	else
		return int(Number)-1;
	
}
int main()
{
	float Number = ReadNumber();
	cout << "my Floor Result : "<< MyFloor(Number) << endl;
	cout << "C++ Floor Result: " << floor(Number) << endl;
	return 0;
}


