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

void ReverseDigit(int Num)
{
	float Remainder = 0;

	while (Num != 0)
	{
		Remainder = Num % 10;

		cout << Remainder << endl;

		Num /= 10;
	}
}

int main()
{
	ReverseDigit(ReadPositiveNumber("Enter a Positive Number to be reversed : "));
}