#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number;

	cout << "Please Enter a Number  : " << endl;
	cin >> Number;

	return Number;
}

int PrintSum(int N)
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

int main()
{
	cout << "The sum of the even numbers is " << PrintSum(ReadNumber()) << endl;
}