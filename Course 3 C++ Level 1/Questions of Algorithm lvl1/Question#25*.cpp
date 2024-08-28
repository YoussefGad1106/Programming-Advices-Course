
#include <iostream>
using namespace std;


short ReadAge()
{
	short Age;

	cout << "Please Enter Age from 18 to 45 : \n";
	cin >> Age;

	return Age;
}


bool CheckAge(short Age, short from, short to)
{
	return (Age >= from && Age <= to);
}

short ReadUntillRange(short from, short to)
{
	int Age = 0;

	do
	{
		Age = ReadAge();

	} while (!CheckAge(Age , from , to));


	return Age;
}

void PrintResult(short Age)
{
	cout << "valid Age" << endl;
}

int main()
{
	PrintResult(ReadUntillRange(18,45));
}
