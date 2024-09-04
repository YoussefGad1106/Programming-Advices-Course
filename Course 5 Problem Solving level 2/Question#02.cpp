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

bool CheckPrime(int N)
{
	for (int i = 2; i <= N / 2.0; i++)
	{
		if (N % i == 0)
			return 0;
	}

	return 1;
}

void PrintPrimeNumbers(int N)
{
	for (int i = 2; i <= N; i++)
	{
		if (CheckPrime(i))
			cout << i << endl;
	}
		
}

int main()
{
	PrintPrimeNumbers(ReadPositiveNumber("Please Enter a Positive Number : "));
}