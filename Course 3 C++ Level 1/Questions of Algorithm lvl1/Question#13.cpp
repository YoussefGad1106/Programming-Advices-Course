#include <iostream>
#include <string>
using namespace std;

struct stNums
{
	int Num1, Num2, Num3;
};

stNums ReadNumbers()
{
	stNums N;

	cout << "Please Enter Number 1 : \n";
	cin >> N.Num1;

	cout << "Please Enter Number 2 : \n";
	cin >> N.Num2;

	cout << "Please Enter Number 3 : \n";
	cin >> N.Num3;

	return N;
}

int GetMax(stNums nums)
{
	int Max = nums.Num1;

	if (nums.Num2 >= Max && nums.Num2 >= nums.Num3 )
	{
		Max = nums.Num2;
	}
	else if (nums.Num3 >= Max && nums.Num3 >= nums.Num2)
	{
		Max = nums.Num3;
	}

	return Max;
}

void PrintMax(int Max)
{
	cout << "The Maximum Number is " << Max << endl;
}

int main()
{
	PrintMax(GetMax(ReadNumbers()));
}
