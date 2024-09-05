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

int SumDigits(int Num)
{
	float Remainder = 0;
	int Sum = 0;

	while (Num != 0)
	{
		Remainder = Num % 10;
		Sum += Remainder;
		Num /= 10;
	}
	return Sum;
}

void PrintSumOfDigits(int Sum)
{
	cout << "The Sum of the Digits is : " << Sum << endl;
}


int main()
{
	PrintSumOfDigits(SumDigits(ReadPositiveNumber("Please Enter a Positive Number : ")));
}