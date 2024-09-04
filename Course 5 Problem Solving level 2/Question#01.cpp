#include <iostream>
using namespace std;

void PrintHeader()
{
	cout << "\t\t Multiplication Table from 1 to 10\n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}
	
	cout << "\n------------------------------------------------------------------------------------\n\n";
}

string Barrier(int i)
{
	if (i < 10)
	{
		return "   |";
	}
	else
	{
		return "  |";
	}
}

void PrintTable()
{
	PrintHeader();
	
	for (int i = 1; i <= 10; i++)
	{
		cout << i << Barrier(i) << "\t";

		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;
	}
}

int main()
{
	PrintTable();
}