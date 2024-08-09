#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;
	string st1 = "43.22";
	string st2;
	double N22;
	float N33;
	int N11;

	// 1- Converting st1 to Double and Float and Int

	N22 = stod(st1);
	cout << N22 << endl;

	N33 = stof(st1);
	cout << N33 << endl;

	N11 = stoi(st1);
	cout << N11 << endl;


	// 2- Convert N1 to String

	st2 = to_string(N1);
	cout << st2 << endl;

	// 3- Convert N2 to String

	st2 = to_string(N2);
	cout << st2 << endl;

	// 4-Convert N3 to string and integer

	st2 = to_string(N3);
	cout << st2 << endl;

	N11 = N3;
	cout << N11 << endl;

	N11 = (float) N3;
	cout << N11 << endl;

	N11 = float(N3);
	cout << N11 << endl;


}