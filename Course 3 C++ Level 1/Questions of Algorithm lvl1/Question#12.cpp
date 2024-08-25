#include <iostream>
#include <string>
using namespace std;

struct stNums
{
	int Num1, Num2;
};

stNums ReadNumbers()
{
	stNums N;

	cout << "Please Enter Number 1 : \n";
	cin >> N.Num1;

	cout << "Please Enter Number 2 : \n";
	cin >> N.Num2;

	return N;
}

int GetMax(stNums nums)
{
	if (nums.Num1 > nums.Num2)
	{
		return nums.Num1;
	}
	else
	{
		return nums.Num2;
	}
}

void PrintMax(int Max)
{
	cout << "The Maximum Number is " << Max << endl;
}

int main()
{
	PrintMax(GetMax(ReadNumbers()));
}
