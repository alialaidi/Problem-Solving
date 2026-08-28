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
int MyRound(float Number)
{
	int intPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart)>=0.5)
	{
		if (Number > 0)
			return ++intPart;
		else
			return --intPart;
	}
	else
		return intPart ;
	
}
int main()
{
	float Number = ReadNumber();
	cout << "my my round Result: "<< MyRound(Number) << endl;
	cout << "C++ round Result: " << round(Number) << endl;
	return 0;
}


