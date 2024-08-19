#include <iostream>
#include <string>

using namespace std;

struct strData
{
	string Name, City, Country;
	short Age, MonthlySalary, YearlySalary;
	char Gender;
	bool Married;
};

void readData(strData& Data1)
{
	cout << "Please Enter your Name : " << endl;
	getline(cin, Data1.Name);

	cout << "Please Enter your Country : " << endl;
	cin >> Data1.Country;

	cout << "Please Enter your City : " << endl;
	cin >> Data1.City;

	cout << "Please Enter your Age : " << endl;
	cin >> Data1.Age;

	cout << "Please Enter your Monthly Salary : " << endl;
	cin >> Data1.MonthlySalary;

	Data1.YearlySalary = Data1.MonthlySalary * 12;

	cout << "Please Enter your Gender Letter : " << endl;
	cin >> Data1.Gender;

	cout << "Please Enter your Social State 1/0 : " << endl;
	cin >> Data1.Married;

}

void printData(strData Data1)
{
	cout << "***************************************************************************************\n";
	cout << "Name: " << Data1.Name << endl;
	cout << "Age: " << Data1.Age << endl;
	cout << "Country: " << Data1.Country << endl;
	cout << "City: " << Data1.City << endl;
	cout << "Mothly Salary: " << Data1.MonthlySalary << endl;
	cout << "Yearly Salary: " << Data1.MonthlySalary * 12 << endl;
	cout << "Gender: " << Data1.Gender << endl;
	cout << "Married: " << Data1.Married << endl;
	cout << "***************************************************************************************\n";
}

int main()
{
	strData Data1;
	readData(Data1);
	printData(Data1);
}