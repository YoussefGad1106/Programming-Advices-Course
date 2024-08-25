#include <iostream>
#include <string>
using namespace std;

void ReadDimensions(int& base, int& height)
{
	cout << "Enter the base length : ";
	cin >> base;

	cout << "Enter the height length : ";
	cin >> height;
}

float CalculateTriangleArea(int base, int height)
{
	return 0.5 * base * height;
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Triangle is : " << Area << endl;
}


int main()
{
	int base, height;
	
	ReadDimensions(base, height);
	PrintArea(CalculateTriangleArea(base, height));

}
