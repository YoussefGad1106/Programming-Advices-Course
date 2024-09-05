#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

bool IsPerfect(int Num)
{
	int Sum = 0;

	for (int i = 1; i <= Num / 2.0; i++)
	{
		if (Num % i == 0)
		{
			Sum += i;
		}
	}

	return Sum == Num;
}

void PrintPerfectToN(int Num)
{
	for (int i = 1; i <= Num; i++)
	{
		if (IsPerfect(i))
			cout << i << endl;
	}
}

int main()
{
	PrintPerfectToN(ReadPositiveNumber("Enter a Positive Number : "));
}