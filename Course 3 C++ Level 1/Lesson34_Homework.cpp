#include <iostream>
#include <string>

using namespace std;

// solve the program using procedure
void mySumProcedure()
{
	int num1, num2;
	cout << "Please enter Number1?" << endl;
	cin >> num1;

	cout << endl;

	cout << "Please enter Number2?" << endl;
	cin >> num2;

	cout << "*************************************" << endl;
	cout << num1 + num2;
}

// solve the program using function
int mySumFunction()
{
	int num1, num2;
	cout << "Please enter Number1?" << endl;
	cin >> num1;

	cout << endl;

	cout << "Please enter Number2?" << endl;
	cin >> num2;

	cout << "*************************************" << endl;
	
	return num1 + num2;
}

int main()
{
	cout << "Question 1 : \n";
	mySumProcedure();

	cout << endl << endl;

	cout << "Question 2 : \n";
	int result = mySumFunction();
	cout << result;

}