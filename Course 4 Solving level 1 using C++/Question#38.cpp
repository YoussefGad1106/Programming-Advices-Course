
#include<iostream>
using namespace std;

int ReadPositiveNunber()
{
	int Number = 0;

	do
	{
		cout << "Please Enter a Number to check : " << endl;
		cin >> Number;

	} while (Number <= 0);
	

	return Number;
}

bool CheckPrime(int N)
{
	for (int i = 2; i < N/2.0; i++)
	{
		if (N % i == 0)
			return 0;
	}

	return 1;
}

void PrintResult(int N)
{
	if (CheckPrime(N))	
		cout << "Prime" << endl;	
	else	
		cout << "Not Prime" << endl;
	
}

int main()
{
	PrintResult(ReadPositiveNunber());
}
