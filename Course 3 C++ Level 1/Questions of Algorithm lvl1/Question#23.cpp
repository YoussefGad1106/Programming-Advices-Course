#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	short side1, side2, side3;
	float p, Area;


	cout << "Enter the length of the first side : ";
	cin >> side1;

	cout << "Enter the length of the second side : ";
	cin >> side2;

	cout << "Enter the length of the third side  : ";
	cin >> side3;

	p = (side1 + side2 + side3) / 2;


	Area = 3.14 * pow((side1 * side2 * side3) / (4 * sqrt(p * (p - side1) * (p - side2) * (p - side3))), 2);

	cout << "The Area = " << Area << endl;

}