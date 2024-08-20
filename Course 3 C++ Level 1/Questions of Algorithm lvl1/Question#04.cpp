#include <iostream>
using namespace std;

struct strInfo
{
	short Age;
	bool License;
};

void ReadInfo(strInfo &info)
{
	cout << "Please Enter your Age : \n";
	cin >> info.Age;

	cout << "Have you got a Driver License ? 1/0 \n";
	cin >> info.License;
}

void PrintResult(strInfo info)
{
	if (info.Age > 21 && info.License == 1)
	{
		cout << "Hired\n";
	}
	else
	{
		cout << "Rejected\n";
	}
}

int main()
{
	strInfo info;

	ReadInfo(info);
	PrintResult(info);
}