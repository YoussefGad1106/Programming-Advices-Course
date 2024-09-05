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

	for (int i = 1; i <= Num/2.0; i++)
	{
		if (Num % i == 0)
		{
			Sum += i;
		}
	}

	return Sum == Num;
}

void ChcekPerfect(int Num)
{
	if (IsPerfect(Num))
		cout << Num << " is Perfect";
	else
		cout << Num << " is not Perfect";
}

int main()
{
	ChcekPerfect(ReadPositiveNumber("Enter a Positive Number : "));
}