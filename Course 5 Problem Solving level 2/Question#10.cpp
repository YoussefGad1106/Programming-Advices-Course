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

int ReverseNumber(int Num)
{
	float Remainder = 0;
	int RevNumber = 0;

	while (Num != 0)
	{
		Remainder = Num % 10;
		RevNumber = RevNumber * 10 + Remainder;
		Num /= 10;
	}
	return RevNumber;
}

void PrintNumberFromLeftToRight(int Num)
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
	int Number = ReadPositiveNumber("Enter a Positive Number : ");
	PrintNumberFromLeftToRight(ReverseNumber(Number));
}