#include <iostream>
using namespace std;


float ReadMark()
{
	float Mark;
	
	cout << "Please Enter your Mark : \n";
	cin >> Mark;

	return Mark;

}

void PrintResult(float Mark)
{
	if (Mark >= 50)
	{
		cout << "PASS\n";
	}
	else
	{
		cout << "FAIL\n";
	}
}

int main()
{
	PrintResult(ReadMark());
}