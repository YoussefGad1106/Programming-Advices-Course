#include <iostream>
using namespace std;

struct strMarks
{
	float Mark1, Mark2, Mark3;
};

void ReadMrks(strMarks &Marks)
{
	cout << "Enter Mark 1 : \n";
	cin >> Marks.Mark1;

	cout << "Enter Mark 2 : \n";
	cin >> Marks.Mark2;

	cout << "Enter Mark 3 : \n";
	cin >> Marks.Mark3;
}

float CalculateAverage(strMarks Marks) 
{
	return (Marks.Mark1 + Marks.Mark2 + Marks.Mark3) / 3.0;
}

void PrintResult(float Avg)
{
	if (Avg >= 50)
	{
		cout << "The Average is " << Avg << endl;
		cout << "PASS\n";
	}
	else
	{
		cout << "The Average is " << Avg << endl;
		cout << "FAIL\n";
	}
}

int main()
{
	strMarks Marks;

	PrintResult(CalculateAverage(ReadMrks(Marks)));
}
