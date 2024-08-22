#include <iostream>
using namespace std;

void Question1()
{
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) << endl;
		}
	}
}

void Question2()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << "*";
		}
		
		cout << endl;
	}
}

void Question3()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}
}

void Question4()
{
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(j) << " ";
		}

		cout << endl;
	}
}

void Question5()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}
}

void Question6()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}
}

int main()
{
	Question1();
	cout << "******************************************\n\n";

	Question2();
	cout << "******************************************\n\n";

	Question3();
	cout << "******************************************\n\n";

	Question4();
	cout << "******************************************\n\n";

	Question5();
	cout << "******************************************\n\n";

	Question6();
	cout << "******************************************\n\n";

	
}