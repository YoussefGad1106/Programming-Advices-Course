
#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number;

	cout << "Please Enter a Number  : " << endl;
	cin >> Number;

	return Number;
}

int GetEvenSum(int N)
{
	int sum = 0;

	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}

	return sum;
}

void PrintSum(int sum)
{
	cout << "The sum of the Even numbers is " << sum << endl;
}

int main()
{
	PrintSum(GetEvenSum(ReadNumber()));
}
