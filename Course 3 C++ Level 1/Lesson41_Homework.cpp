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

void ReadAllPersons(strPersonInfo Persons[100], int& length)
{
	

	cout << "How many persons you will enter : " << endl;
	cin >> length;
	
	for (int i = 0; i < length; i++)
	{
		cout << "Enter Person no." << i + 1 << " info" << endl;
		ReadOnePerson(Persons[i]);
	}
}

void PrintAllPersons(strPersonInfo Persons[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		PrintOnePerson(Persons[i]);
	}
}

int main()
{
	
	strPersonInfo Persons[100];

	int length;

	ReadAllPersons(Persons , length);
	PrintAllPersons(Persons , length);
}
