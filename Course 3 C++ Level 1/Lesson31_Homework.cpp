#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2, str3;

	cout << "Please enter String1 ? \n";
	getline(cin, str1);

	cout << endl << endl;

	cout << "Please enter String2 ? \n";
	cin >> str2;

	cout << endl << endl;

	cout << "Please enter String3 ? \n";
	cin >> str3;

	cout << "**************************************\n";

	cout << "The Length of String1 is " << str1.length() << endl;
	cout << "The Characters at 0,2,4,7,are: " << str1[0] << " " << str1[2] << " " << str1[4] << " " << str1[7] << endl;
	cout << "Concatenatenating String2 and String3 = " << str2 + str3 << endl;
	cout << str2 << " * " << str3 << " = " << stoi(str2) * stoi(str3) << endl;



}