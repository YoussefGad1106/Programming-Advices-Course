
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float HoursToDays(float NumberOfHours)
{
	return NumberOfHours / 24.0;
}

float HoursToWeeks(float NumberOfHours)
{
	return NumberOfHours / 24.0 / 7.0;
}

float DaysToWeeks(float NumberOfDays)
{
	return NumberOfDays / 7.0;
}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Please Enter Number of Hours : ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << "\nTotal Hours = " << NumberOfHours << endl;
	cout << "\nTotal Days = " << NumberOfDays << endl;
	cout << "\nTotal Weeks = " << NumberOfWeeks << endl;
}
