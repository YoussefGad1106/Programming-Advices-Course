
#include <iostream>
using namespace std;


short ReadAge()
{
	short Age;

	cout << "Please Enter your Age : \n";
	cin >> Age;

	return Age;
}

// My Answer
bool CheckAge(short Age)
{
	if (Age >= 18 && Age <= 45)
	{
		return 1;
	}

	else
	{
		return 0;
	}

}

void PrintResult(short Age)
{
	if (CheckAge(Age))
	{
		cout << "Valid Age\n";
	}
	else
	{
		cout << "Invalid Age\n";
	}
}

int main()
{
	PrintResult(ReadAge());
}


// Prof Answer for CheckAge function

bool CheckAge(short Age, short from, short to)
{
	return (Age >= from && Age <= to);
}
