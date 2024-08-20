#include <iostream>
using namespace std;

short ReadMonth()
{
	short Number;

	cout << "\n**********************************\n";
	cout << " 1 Print January\n";
	cout << " 2 Print February\n";
	cout << " 3 Print March\n";
	cout << " 4 Print Apri\n";
	cout << " 5 Print May\n";
	cout << " 6 Print June\n";
	cout << " 7 Print July\n";
	cout << " 8 Print August\n";
	cout << " 9 Print September\n";
	cout << " 10 Print October\n";
	cout << " 11 Print November\n";
	cout << " 12 print December\n";
	cout << "\n**********************************\n";
	cout << "Please Enter a Number : " << endl;
	cin >> Number;

	return Number;
}
void printMonth(short Number)
{
	switch (Number)
	{
	case 1:
		cout << "Its January" << endl;
		break;

	case 2:
		cout << "Its February" << endl;
		break;

	case 3:
		cout << "Its March" << endl;
		break;

	case 4:
		cout << "Its Apri" << endl;
		break;

	case 5:
		cout << "Its May" << endl;
		break;

	case 6:
		cout << "Its June" << endl;
		break;

	case 7:
		cout << "Its July" << endl;
		break;

	case 8:
		cout << "Its July" << endl;
		break;

	case 9:
		cout << "Its September" << endl;
		break;		 
			
	case 10:		  
		cout << "Its  October" << endl;
		break;

	case 11:
		cout << "Its November" << endl;
		break;

	case 12:
		cout << "Its December" << endl;
		break;

	default:
		cout << "Invalid Input";
		break;
	}
}
int main()
{
	printMonth(ReadMonth());
}
