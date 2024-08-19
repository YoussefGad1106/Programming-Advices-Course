#include <iostream>
#include <string>
using namespace std;

float rectangleArea(float Length , float Width)
{
	return Length * Width;
}


int main()
{
	float Length, Width;

	cout << "Enter the Length value : " << endl;
	cin >> Length;

	cout << "Enter the Width value : " << endl;
	cin >> Width;

	cout << "The Area of the Rectangle is : " << rectangleArea(Length , Width) << endl;

}
