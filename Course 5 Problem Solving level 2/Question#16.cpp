#include <iostream>
using namespace std;

void PrintAllWords()
{
	for (int i = 65; i < 91; i++)
	{		
		for (int j = 65; j < 91; j++)
		{
			for (int k = 65; k < 91; k++)
			{
				cout << char(i) << char(j) << char(k);
				cout << endl;
			}

		}
	}
		
}

int main()
{
	PrintAllWords();
}