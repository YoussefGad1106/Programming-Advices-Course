#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number;

	do
	{
		cout << "Please Enter a Positive Number  : " << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int PrintFactorial(int N)
{
	int fact = 1;

	for (int i = 1; i <= N; i++)
	{
		fact *= i;
	}

	return fact;
}

int main()
{
	cout << "The Factorial is  " << PrintFactorial(ReadNumber()) << endl;
}
