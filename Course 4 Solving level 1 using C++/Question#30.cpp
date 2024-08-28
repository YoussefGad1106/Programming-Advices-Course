
#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number = 0;

	do
	{
		cout << "Please Enter a Positive Number  : " << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int GetFactorial(int N)
{
	if (N == 1 )
	{
		return 1;
	}
	else
	{
		return N *= GetFactorial(N - 1);
	}

}

void PrintFactorial(int F)
{
	cout << "The Factorial is " << F << endl;
}

int main()
{
	PrintFactorial(GetFactorial(ReadNumber()));
}
