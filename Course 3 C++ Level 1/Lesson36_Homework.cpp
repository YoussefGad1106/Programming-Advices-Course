#include <iostream>
#include <string>

using namespace std;

short Var1 = 100;


void changeGlobalVar(short Var1)
{	
	 Var1 = 5000; 
	 cout << Var1 << endl;
}

int main()
{
	changeGlobalVar(Var1);
	::Var1 = 4000;
	cout << Var1 << endl;

}