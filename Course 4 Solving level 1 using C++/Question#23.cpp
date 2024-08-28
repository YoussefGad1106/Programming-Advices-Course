
#include <iostream>
#include <cmath>
using namespace std;

void ReadSides(int& side1, int& side2, int& side3)
{
	cout << "Enter the length of the first side : ";
	cin >> side1;

	cout << "Enter the length of the second side : ";
	cin >> side2;

	cout << "Enter the length of the third side  : ";
	cin >> side3;
}

float CircleArea(int side1, int side2, int side3)
{
	float p;
	p = (side1 + side2 + side3) / 2;

	return 3.14 * pow((side1 * side2 * side3) / (4 * sqrt(p * (p - side1) * (p - side2) * (p - side3))), 2);
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Circle is : " << Area << endl;
}

int main()
{
	int side1, side2, side3;

	ReadSides(side1, side2, side3);
	PrintArea(CircleArea(side1, side2, side3));
}
