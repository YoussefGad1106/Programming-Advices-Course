
#include <iostream>
using namespace std;

enum enDays
{
	Sun = 1 , Mon = 2 , Tue = 3 , Wed = 4 ,Thu = 5 , Fri = 6 , Sat = 7 
};

void DisplayMenu()
{

	cout << "\n**********************************\n";
	cout << " 1 Print Sunday\n";
	cout << " 2 Print Monday\n";
	cout << " 3 Print Tuesday\n";
	cout << " 4 Print Wednesday\n";
	cout << " 5 Print Thursdayy\n";
	cout << " 6 Print Friday\n";
	cout << " 7 Print Saturday\n";
	cout << "\n**********************************\n";
}

int ReadDay()
{
	int Number = 0;

	do
	{
		cout << "Please Enter a Number : " << endl;
		cin >> Number;

	} while (Number <= 0 || Number > 7);
	

	return Number;
}

enDays CheckDay(int Number)
{
	return (enDays)Number;

}

void PrintDay(enDays Day)
{
	if (Day == enDays::Sat)
		cout << "Its Saturday" << endl;
	else if (Day == enDays::Fri)
		cout << "Its Friday" << endl;
	else if (Day == enDays::Mon)
		cout << "Its Monday" << endl;
	else if (Day == enDays::Wed)
		cout << "Its Wednesday" << endl;
	else if (Day == enDays::Tue)
		cout << "Its Tuesday" << endl;
	else if (Day == enDays::Thu)
		cout << "Its Thursday" << endl;
	else
		cout << "Its Sunday" << endl;
}

int main()
{
	DisplayMenu();
	PrintDay(CheckDay(ReadDay()));
}
