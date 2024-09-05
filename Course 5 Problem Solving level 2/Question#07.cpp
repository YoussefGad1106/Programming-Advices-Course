
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int ReverseNumber(int Num)
{
	float Remainder = 0;
	int RevNumber = 0;
	cout << "The Reversed Number is : " << endl;
	while (Num != 0)
	{
		Remainder = Num % 10;
		RevNumber = RevNumber * 10 + Remainder;
		Num /= 10;
	}
	return RevNumber;
}

int main()
{	
	cout << ReverseNumber(ReadPositiveNumber("Enter a Positive Number to be reversed : "));
}
