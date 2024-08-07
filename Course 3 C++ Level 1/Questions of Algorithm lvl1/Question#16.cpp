#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	short side, diagonal;

	cout << "Please enter the side length : ";
	cin >> side;
	
	cout << "Please enter the diagonal length : ";
	cin >> diagonal;

	cout << "The Area = " << side *  sqrt(pow(diagonal, 2) - pow(side, 2)) << endl;



}
