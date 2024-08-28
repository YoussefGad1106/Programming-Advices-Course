
#include <iostream>
using namespace std;


// Important Note --> if you gave a function 2 parameters the one on the right executes first

int ReadNumber()
{
	int Number;

	cout << "Please Enter a Number  : " << endl;
	cin >> Number;

	return Number;
}

int ReadPower()
{
	int Power;

	cout << "Please Enter the Power  : " << endl;
	cin >> Power;

	return Power;
}

int N_Power_M(int N , int M)
{
	int result = 1;

	if (M == 0)
	{
		return 1;
	}

	for (int i = 1; i <= M; i++)
	{
		result *= N;
	}

	return result;
}

void PrintResult(int result)
{
	cout << "The Result is " << result << endl;
}

int main()
{
	PrintResult(N_Power_M(ReadPower(), ReadNumber()));
}
