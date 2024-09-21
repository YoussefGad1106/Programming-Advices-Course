#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

void InvertedPattern(int num)
{
	for (int i = num; i >= 1; i--)
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
	InvertedPattern(Number);
}