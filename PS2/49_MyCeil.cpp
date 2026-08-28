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
float GetFractionPart(float Number)
{
	return Number - int(Number);
}
int MyCeil(float Number)
{

	if (abs(GetFractionPart(Number)) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
		return int(Number);
	
}
int main()
{
	float Number = ReadNumber();
	cout << "my Ceil Result : "<< MyCeil(Number) << endl;
	cout << "C++ Ceil Result: " << ceil(Number) << endl;
	return 0;
}


