#include <iostream>
#include <string>
using namespace std;

void printName(string Name)
{
	cout << "Your Name is : " << Name << endl;
}

int main()
{
	string Name;

	cout << "Please Enter your Name : " << endl;
	getline(cin, Name);

	printName(Name);
}