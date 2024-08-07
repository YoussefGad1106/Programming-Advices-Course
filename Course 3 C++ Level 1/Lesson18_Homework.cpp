#include <iostream>
using namespace std;

int main()
{
	// Program 1

	string Name , City , Country;
	int Age;
	float MonthlySalary;
	char Gender;
	bool isMarried;

	cout << "Please Enter your Name : \n";
	cin >> Name;

	cout << "Please Enter your Age : \n";
	cin >> Age;

	cout << "Please Enter your City : \n";
	cin >> City;

	cout << "Please Enter your Country : \n";
	cin >> Country;

	cout << "Please Enter your Monthly Salary : \n";
	cin >> MonthlySalary;

	cout << "Please Enter your Gender : \n";
	cin >> Gender;

	cout << "Are you Married? 1/0 \n";
	cin >> isMarried;



	cout << "******************************\n";
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "City: " << City << endl;
	cout << "Country: " << Country << endl;
	cout << "Mothly Salary: " << MonthlySalary << endl;
	cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Married: " << isMarried << endl;
	cout << "******************************\n";



	// Program 2

	int num1, num2, num3;

	cout << "Please Enter the First Number : \n";
	cin >> num1;

	cout << "Please Enter the Second Number : \n";
	cin >> num2;

	cout << "Please Enter the Third Number : \n";
	cin >> num3;

	cout << num1 << " +\n" << num2 << " +\n" << num3 << "\n\n" << "----------------------------------------------\n\n" << "Total = " << num1 + num2 + num3;


	// Program 3

	int Age ;

	cout << "Please Enter your age : \n";
	cin >> Age;

	cout << "After 5 years you will be " << Age + 5 << " years old.\n";




	return 0;


}