#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
	string Name;
	
	cout << "Please Enter your Name : " << endl;
	getline(cin, Name);

	return Name;
}

void printName(string Name)
{
	cout << "Your Name is : " << Name << endl;
}

int main()
{
	printName(ReadName());
}
