#include <iostream>
#include <string>
using namespace std;

void ReadDimensions(float& Length, float& Width)
{
	cout << "Enter the Length value : " << endl;
	cin >> Length;

	cout << "Enter the Width value : " << endl;
	cin >> Width;
}

float CalculateRectangleArea(float Length, float Width)
{
	return Length * Width;
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Rectangle is : " << Area << endl;
}


int main()
{
	float Length, Width;
	
	ReadDimensions(Length, Width);
	PrintArea(CalculateRectangleArea(Length, Width));

}
