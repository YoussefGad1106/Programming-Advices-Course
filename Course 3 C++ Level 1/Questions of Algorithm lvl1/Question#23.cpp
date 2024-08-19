#include <iostream>
#include <cmath>
using namespace std;

float circleArea(short side1, short side2, short side3)
{
	float p;
	p = (side1 + side2 + side3) / 2;

	return 3.14 * pow((side1 * side2 * side3) / (4 * sqrt(p * (p - side1) * (p - side2) * (p - side3))), 2);
		
}
int main()
{
	short side1, side2, side3;
	
	cout << "Enter the length of the first side : ";
	cin >> side1;

	cout << "Enter the length of the second side : ";
	cin >> side2;

	cout << "Enter the length of the third side  : ";
	cin >> side3;
	
	cout << "The area of the Circle is : " << circleArea(side1, side2, side3) << endl;
}
