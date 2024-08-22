#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number;

	cout << "Please Enter a Number : " << endl;
	cin >> Number;

	return Number;
}

void PrintNumbers(int N)
{
	for (int i = N; i >= 1; i--)
	{
		cout << i << endl;
	}
}

int main()
{
	PrintNumbers(ReadNumber());
}