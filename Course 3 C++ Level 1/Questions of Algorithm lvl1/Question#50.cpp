#include <iostream>
#include <string>
using namespace std;


string ReadPIN()
{
	string PIN;

	cout << "Please Enter your PIN : \n";
	cin >> PIN;

	return PIN;
}

void CheckPIN(string PIN)
{
	string PINCode = "1234";
	short Attempts = 2;

	while (PIN != PINCode && Attempts != 0)
	{
		cout << "Wrong PIN\n";
		PIN = ReadPIN();
		Attempts--;
	}

	if (PIN == PINCode)
	{
		cout << " Your Balance is: 7500\n";
	}

	if (Attempts == 0)
	{
		cout << "Card is Locked\n";
	}

}

int main()
{
	CheckPIN(ReadPIN());
}