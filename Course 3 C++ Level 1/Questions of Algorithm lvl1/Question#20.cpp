#include <iostream>
#include <cmath>
using namespace std;

void ReadRadius(int& Side)
{
	cout << "Enter the Side length : ";
	cin >> Side;
}

float CircleArea(int Side)
{
	return ((3.14 / 4) * pow(Side, 2));
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Circle is : " << Area << endl;
}

int main()
{
	int Side;

	ReadRadius(Side);
	PrintArea(CircleArea(Side));
}
