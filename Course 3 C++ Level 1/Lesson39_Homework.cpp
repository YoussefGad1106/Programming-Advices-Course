#include <iostream>
#include <string>
using namespace std;

int main()
{
	float gradesArray[3];

	cout << "Please Enter Grade 1 : " << endl;
	cin >> gradesArray[0];

	cout << "Please Enter Grade 2 : " << endl;
	cin >> gradesArray[1];

	cout << "Please Enter Grade 3 : " << endl;
	cin >> gradesArray[2];

	cout << "***********************************************\n";
	cout << "The Average of grades is " << (gradesArray[0] + gradesArray[1] + gradesArray[2]) / 3 << endl;
}