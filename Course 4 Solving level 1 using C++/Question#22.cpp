#include <iostream>
#include <cmath>
using namespace std;

void ReadDimensions(int& EqualSide, int& Base)
{
	cout << "Enter the equalSide length : ";
	cin >> EqualSide;

	cout << "Enter the Base length : ";
	cin >> Base;
}

float CircleArea(int EqualSide, int Base)
{
	return ((3.14 / 4) * pow(Base, 2)) * ((2 * EqualSide) - Base) / ((2 * EqualSide) + Base);
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Circle is : " << Area << endl;
}

int main()
{
	int EqualSide, Base;

	ReadDimensions(EqualSide, Base);
	PrintArea(CircleArea(EqualSide,Base));
}
