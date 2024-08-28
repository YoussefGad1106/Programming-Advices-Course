#include <iostream>
using namespace std;


int ReadNumbersAndSumThem()
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
	cout << "The Sum is  " << ReadNumbersAndSumThem() << endl;
}
