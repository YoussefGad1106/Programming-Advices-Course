#include <iostream>
using namespace std;

struct strPersonInfo
{
	string FirstName, LastName, Phone;
	short Age;
};

void ReadOnePerson(strPersonInfo &Person)
{
	cout << "Please Enter your First Name : \n";
	cin >> Person.FirstName;

	cout << "Please Enter your Last Name : \n";
	cin >> Person.LastName;

	cout << "Please Enter your Age : \n";
	cin >> Person.Age;

	cout << "Please Enter your Phone : \n";
	cin >> Person.Phone;
}

void PrintOnePerson(strPersonInfo Person)
{
	cout << "\n******************************************\n";
	cout << "First Name : " << Person.FirstName << endl;
	cout << "Last Name : " << Person.LastName << endl;
	cout << "Age : " << Person.Age << endl;
	cout << "Phone : " << Person.Phone << endl;
	cout << "\n******************************************\n";
}

void ReadAllPersons(strPersonInfo Persons[2])
{
	ReadOnePerson(Persons[0]);
	ReadOnePerson(Persons[1]);
}

void PrintAllPersons(strPersonInfo Persons[2])
{
	PrintOnePerson(Persons[0]);
	PrintOnePerson(Persons[1]);
}

int main()
{
	strPersonInfo Persons[2];

	ReadAllPersons(Persons);
	PrintAllPersons(Persons);
}