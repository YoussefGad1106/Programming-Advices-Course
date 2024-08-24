#include <iostream>
using namespace std;

// Prof Answer

enum enNumberType{Even = 1 , Odd = 2};

int ReadNumber()
{
	int Number;
	
	cout << "Please Enter a Number to check it : " << endl;
	cin >> Number;
	
	return Number;
}

enNumberType CheckNumberType(int Number)
{
	
	if (Number % 2 == 0)
	{
		return enNumberType::Even;
	}
	else
	{
		return enNumberType::Odd;
	}

}

void PrintNumberType(enNumberType type)
{
	if (type == enNumberType::Even)
	{
		cout << "The Number is Even\n";
	}
	else
	{
		cout << "The Number is Odd\n";
	}

}

int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
}


/***********************************/

// My Answer


short ReadNumber()
{
	short Number;

	cout << "Please Enter a Number to check it : " << endl;
	cin >> Number;

	return Number;
}

void CheckNumber(short Number)
{
	if (Number % 2 == 0)
	{
		cout << "The Number " << Number << " is Even\n";
	}
	else
	{
		cout << "The Number " << Number << " is Odd\n";
	}
}

int main()
{
	CheckNumber(ReadNumber());
}
