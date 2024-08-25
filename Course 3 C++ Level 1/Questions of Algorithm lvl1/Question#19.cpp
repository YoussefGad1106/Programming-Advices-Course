#include <iostream>
#include <cmath>
using namespace std;

void ReadRadius(float& Diameter)
{
	cout << "Enter the Diameter length : ";
	cin >> Diameter;
}

float CircleArea(float Diameter)
{
	return ((3.14 / 4) * pow(Diameter, 2));
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Circle is : " << Area << endl;
}

int main()
{
	float Diameter;

	ReadRadius(Diameter);
	PrintArea(CircleArea(Diameter));
}

