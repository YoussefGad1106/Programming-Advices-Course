#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

void NumberPattern(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}

		cout << endl;
	}
}



int main()
{
	int Number = ReadNumber("Enter a number : ");
	NumberPattern(Number);
}