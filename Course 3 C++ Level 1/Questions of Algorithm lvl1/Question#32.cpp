#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number;

	cout << "Please Enter a Number  : " << endl;
	cin >> Number;

	return Number;
}


int PrintMultiply(int N)
{
	int Power;
	int result = 1;

	cout << "Please Enter the Power  : " << endl;
	cin >> Power;

	for (int i = 1 ; i <= Power; i++)
	{
		result *= N;
	}

	return result;
}

int main()
{
	cout << "The Result is " << PrintMultiply(ReadNumber()) << endl;
}