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
		system("color 4f");
		cout << "Wrong PIN , You have " << Attempts << "more tries left\n";
		PIN = ReadPIN();
		Attempts--;
	}

	if (PIN == PINCode)
	{
		system("color 2f");
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
