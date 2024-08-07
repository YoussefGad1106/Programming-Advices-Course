#include <iostream>
using namespace std;


int main()
{
    short LoanAmount, MonthlyPayment;

    cout << " Please enter the loan amount : ";
    cin >> LoanAmount;

    cout << " please enter the monthly payment : ";
    cin >> MonthlyPayment;

    cout << LoanAmount / MonthlyPayment << " Months\n";

   

}