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

int DigitFrequency(int Num, int Digit)
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

	return Frequency;

	
}

void CheckFrequencyOfAllDigits(int Num)
{
	short Frequency = 0;

	for (int i = 0; i < 10; i++)
	{
		Frequency = DigitFrequency(Num, i);

		if (Frequency != 0)
		{
			cout << "Digit " << i << " Frequency is " << Frequency << " Time(s)" << endl;
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Number : ");

	 CheckFrequencyOfAllDigits(Number);
}

