#include <iostream>
using namespace std;


int ReadNumbers()
{
	int sum = 0, Number = 0;

	do
	{
		sum += Number;

		cout << "Please Enter a Number or Enter (-99) to Exit\n";
		cin >> Number;

	} while (Number != -99);
	
	return sum;
}

int main()
{
	cout << "The Sum is  " << ReadNumbers() << endl;
}