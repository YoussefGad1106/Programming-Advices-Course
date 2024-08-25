#include <iostream>
#include <string>
using namespace std;

void ReadDimensions(float& Side, float& Diagonal)
{
	cout << "Please enter the side area length : ";
	cin >> Side;

	cout << "Please enter the diagonal length : ";
	cin >> Diagonal;
}

float CalculateRectangleArea(float Side, float Diagonal)
{
	return Side * sqrt(pow(Diagonal, 2) - pow(Side, 2));
}

void PrintArea(float Area)
{
	cout << "\nThe Area of the Rectangle is : " << Area << endl;
}


int main()
{
	float Side, Diagonal;
	
	ReadDimensions(Side, Diagonal);
	PrintArea(CalculateRectangleArea(Side, Diagonal));

}
