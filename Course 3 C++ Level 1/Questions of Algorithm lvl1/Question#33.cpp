#include <iostream>
#include <string>
using namespace std;


float ReadGradeInRange(int from , int to)
{
	float Grade = 0;
	
	do
	{
		cout << "Please Enter your Grade from 0 to 100 : \n";
		cin >> Grade;

	} while (Grade <= from || Grade >= to);
	

	return Grade;
}

void CheckGrade(float Grade)
{
	if (Grade >= 90)
	{
		cout << "Your Grade is A" << endl;
	}
	else if (Grade >= 80)
	{
		cout << "Your Grade is B" << endl;
	}
	else if (Grade >= 70)
	{
		cout << "Your Grade is C" << endl;
	}
	else if (Grade >= 60)
	{
		cout << "Your Grade is D" << endl;
	}
	else if (Grade >= 50)
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
	CheckGrade(ReadGradeInRange(0,100));
}
