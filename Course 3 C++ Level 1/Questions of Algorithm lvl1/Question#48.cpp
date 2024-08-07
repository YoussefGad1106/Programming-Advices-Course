#include <iostream>
using namespace std;


int main()
{
    short LoanAmount, howManyMonths;

    cout << " Please enter the loan amount : ";
    cin >> LoanAmount;

    cout << " please enter how many months you need to settle the loan : ";
    cin >> howManyMonths;

    cout << LoanAmount / howManyMonths << endl;



}