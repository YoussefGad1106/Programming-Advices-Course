#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

void LettersPattern(int num)
{
	for (int i = 65; i <= 64 + num; i++)
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
	LettersPattern(Number);
}


