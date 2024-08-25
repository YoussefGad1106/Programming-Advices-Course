#include <iostream>
#include <cmath>
using namespace std;

void ReadRadius(float& Radius)
{
	cout << "Enter the radius length : ";
	cin >> Radius;
}

float CircleArea(float radius)
{
	return 3.14 * pow(radius, 2);
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Circle is : " << Area << endl;
}

int main()
{
	float radius;

	ReadRadius(radius);
	PrintArea(CircleArea(radius));
}

