#include <iostream>
using namespace std;


short ReadAge()
{
	short Age;
	
	cout << "Please Enter your Age : \n";
	cin >> Age;

	return Age;
}

void CheckAge(short Age)
{
	if (Age >= 18 && Age <= 45 )
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
	CheckAge(ReadAge());
}