#include <iostream>
#include <string>
using namespace std;


float ReadGrade()
{
	float Grade;

	cout << "Please Enter your Grade : \n";
	cin >> Grade;

	return Grade;
}

void CheckGrade(float Grade)
{
	if (Grade >= 90 && Grade <= 100)
	{
		cout << "Your Grade is A" << endl;
	}
	else if (Grade >= 80 && Grade <= 89)
	{
		cout << "Your Grade is B" << endl;
	}
	else if (Grade >= 70 && Grade <= 79)
	{
		cout << "Your Grade is C" << endl;
	}
	else if (Grade >= 60 && Grade <= 69)
	{
		cout << "Your Grade is D" << endl;
	}
	else if (Grade >= 50 && Grade <= 59)
	{
		cout << "Your Grade is E" << endl;
	}
	else
	{
		cout << "Your Grade is F" << endl;
	}
}

int main()
{
	CheckGrade(ReadGrade());
}