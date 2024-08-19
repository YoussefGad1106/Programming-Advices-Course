#include <iostream>
#include <cmath>
using namespace std;

void powNumber(short Number , short Power)
{
	cout << pow(Number, Power);
}

int main()
{
	short Number, Power;

	cout << "Enter the Number : ";
	cin >> Number;

	cout << "Enter the Power : ";
	cin >> Power;

	powNumber(Number , Power);
}
