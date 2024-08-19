#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float radius)
{
	return 3.14 * pow(radius, 2);
}

int main()
{
	float radius;

	cout << "Enter the radius length : ";
	cin >> radius;

	cout << "The area of the Circle is : " << circleArea(radius) << endl;
}
	
