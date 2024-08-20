#include <iostream>
using namespace std;

struct Inputs
{
	short Number1, Number2;
	char OperationType;
};

void ReadInputs(Inputs &in) 
{
	cout << "Enter the First Number : " << endl;
	cin >> in.Number1;

	cout << "Enter the Second Number : " << endl;
	cin >> in.Number2;

	cout << "Enter the Operation Type : " << endl;
	cin >> in.OperationType;
}

float Calculator(Inputs in)
{
	switch (in.OperationType)
	{
	case '+' :
		return in.Number1 + in.Number2;
		break;

	case '-':
		return in.Number1 - in.Number2;
		break;

	case '*':
		return in.Number1 * in.Number2;
		break;

	case '/':
		return in.Number1 / in.Number2;
		break;

	default:
		return 0;
		break;
	}
	
}

void PrintResult(float calc)
{
	cout << "The Answer is " << calc << endl;
}

int main()
{
	Inputs in;

	ReadInputs(in);
	PrintResult(Calculator(in));
}
