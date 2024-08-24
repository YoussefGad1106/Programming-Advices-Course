#include <iostream>
using namespace std;

struct stName
{
	string FirstName, LastName;
};

stName ReadName()
{
	stName Name;
	
	cout << "Please Enter the First Name : " << endl;
	cin >> Name.FirstName;

	cout << "Please Enter the Last Name : " << endl;
	cin >> Name.LastName;

	return Name;
}

string GetFullName(stName Name) // to apply the reusability
{
	return Name.FirstName+ " " + Name.LastName;
}

void PrintName(string FullName)
{
	cout << FullName << endl;
}

int main()
{
	PrintName(GetFullName(ReadName()));
}
