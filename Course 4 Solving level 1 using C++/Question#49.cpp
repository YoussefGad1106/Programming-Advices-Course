
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

	if (PIN._Equal(PINCode))
	{
		system("color 2f");
		cout << "Your Balance is: 7500\n";
	}
	else
	{
		system("color 4f");
		cout << "Wrong PIN\n";
	}
}

int main()
{
	CheckPIN(ReadPIN());
}
