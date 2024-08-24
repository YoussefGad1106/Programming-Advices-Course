#include <iostream>
using namespace std;

enum enResult{pass = 1 , fail = 2};

float ReadMark()
{
	float Mark;

	cout << "Please Enter your Mark : \n";
	cin >> Mark;

	return Mark;

}

enResult CheckResult(float Mark)
{
	if (Mark >= 50)
	{
		return enResult::pass;
	}
	else
	{
		return enResult::fail;
	}

}

void PrintResult(enResult result)
{
	if (result == enResult::pass)
	{
		cout << "\nPASS\n";
	}
	else
	{
		cout << "\nFAIL\n";
	}
}

int main()
{
	PrintResult(CheckResult(ReadMark()));
}
