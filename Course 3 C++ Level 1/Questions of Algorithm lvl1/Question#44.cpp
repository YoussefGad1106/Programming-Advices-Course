#include <iostream>
using namespace std;

short ReadDay()
{
	short Number;

	cout << "\n**********************************\n";
	cout << " 1 Print Sunday\n";
	cout << " 2 Print Monday\n";
	cout << " 3 Print Tuesday\n";
	cout << " 4 Print Wednesday\n";
	cout << " 5 Print Tuesday\n";
	cout << " 6 Print Friday\n";
	cout << " 7 Print Saturday\n";
	cout << "\n**********************************\n";
	cout << "Please Enter a Number : " << endl;
	cin >> Number;

	return Number;
}
void printDay(short Number)
{
	switch (Number)
	{
	case 1 :
		cout << "Its Sunday" << endl;
		break;

	case 2 :
		cout << "Its Monday" << endl;
		break;

	case 3 :
		cout << "Its Tuesday" << endl;
		break;

	case 4 :
		cout << "Its Wednesday" << endl;
		break;

	case 5 :
		cout << "Its Tuesday" << endl;
		break;

	case 6 :
		cout << "Its Friday" << endl;
		break;

	case 7 :
		cout << "Its Saturday" << endl;
		break;
	
	default:
		cout << "Invalid Input";
		break;
	}
}
int main()
{
	printDay(ReadDay());
}
