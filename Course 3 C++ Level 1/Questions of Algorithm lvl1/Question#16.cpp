#include<iostream>
#include<cmath>
using namespace std;

float rectangleArea(short sideArea, short diagonal)
{
	return sideArea * sqrt(pow(diagonal, 2) - pow(sideArea, 2));
}

int main()
{
	short sideArea, diagonal;

	cout << "Please enter the side area length : ";
	cin >> sideArea;

	cout << "Please enter the diagonal length : ";
	cin >> diagonal;

	cout << "The area of the Rectangle is " << rectangleArea(sideArea, diagonal) << endl;
}
