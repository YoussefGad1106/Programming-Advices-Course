#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

int ReverseNumber(int Num)
{
	float Remainder = 0;
	int RevNumber = 0;

	while (Num != 0)
	{
		Remainder = Num % 10;
		RevNumber = RevNumber * 10 + Remainder;
		Num /= 10;
	}
	return RevNumber;
}

bool CheckPalindrome(int num)
{
	return num == ReverseNumber(num);
}

int main()
{
	int Number = ReadNumber("Enter a number : ");

	if (CheckPalindrome(Number))
	{
		cout << "Yes, it is a Palindrome number\n";
	}
	else
	{
		cout <<  "No, it is NOT a Palindrome number\n";
	}
}