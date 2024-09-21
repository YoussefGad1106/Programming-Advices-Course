#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

void InvertedLettersPattern(int num)
{
	for (int i = 64 + num; i >= 65; i--)
	{
		for (int j = 64; j < i; j++)
		{
			cout << char(i);
		}

		cout << endl;
	}
}


int main()
{
	int Number = ReadNumber("Enter a number : ");
	InvertedLettersPattern(Number);
}
