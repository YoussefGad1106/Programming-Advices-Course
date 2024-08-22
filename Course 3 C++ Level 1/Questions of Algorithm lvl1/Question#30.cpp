#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number;

	cout << "Please Enter a Number  : " << endl;
	cin >> Number;

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
	cout << "The sum of the even numbers is " << PrintFactorial(ReadNumber()) << endl;
}