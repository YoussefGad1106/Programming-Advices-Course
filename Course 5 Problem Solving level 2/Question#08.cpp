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

void DigitFrequency(int Num , int Digit)
{
	int Frequency = 0;

	while (Num != 0)
	{
		if (Num % 10 == Digit)
		{
			Frequency++;
		}

		Num /= 10;
	}

	cout << "Digit " << Digit << " Frequency is " << Frequency << " Time(s)" << endl;
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Number : ");
	short Digit = ReadPositiveNumber("Enter a Digit : ");

	DigitFrequency(Number,Digit);
}

