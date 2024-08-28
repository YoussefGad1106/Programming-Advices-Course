#include <iostream>
using namespace std;

struct stMoney
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stMoney ReadMoney()
{
	stMoney Money;

	cout << "Enter the Number of Pennies : " << endl;
	cin >> Money.Pennies;


	cout << "Enter the Number of Nickels : " << endl;
	cin >> Money.Nickels;

	cout << "Enter the Number of Dimes : " << endl;
	cin >> Money.Dimes;

	cout << "Enter the Number of Quarters : " << endl;
	cin >> Money.Quarters;


	cout << "Enter the Number of Dollars : " << endl;
	cin >> Money.Dollars;

	return Money;
}

int GetTotalPennies(stMoney M)
{
	return (M.Dollars * 100) + (M.Quarters * 25) + (M.Dimes * 10) + (M.Nickels * 5) + (M.Pennies);
}

void PrintPenniesAndDollars(int total)
{
	cout << "The Total Pennies is : " << total << endl;
	cout << "The Total Dollars is : " << total/100.0 << endl;
}

int main()
{
	PrintPenniesAndDollars(GetTotalPennies(ReadMoney()));
}
