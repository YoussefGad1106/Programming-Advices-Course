#include <iostream>
#include <cmath>
using namespace std;

void ReadCircumference(float& Circumference)
{
	cout << "Enter the Circumference value : ";
	cin >> Circumference;
}

float CircleArea(float Circumference)
{
	return (pow(Circumference, 2) / (4 * 3.14));
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Circle is : " << Area << endl;
}

int main()
{
	float Circumference;

	ReadCircumference(Circumference);
	PrintArea(CircleArea(Circumference));
}

