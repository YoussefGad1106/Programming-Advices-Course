#include <iostream>
using namespace std;


int ReadNumbers()
{
	int sum = 0, Number = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Please Enter a Number below 50\n";
		cin >> Number;

		if (Number >= 50)
		{
			continue;
		}
		
		sum += Number;
	}

	return sum;
}

int main()
{
	cout << "The Sum is  " << ReadNumbers() << endl;
}