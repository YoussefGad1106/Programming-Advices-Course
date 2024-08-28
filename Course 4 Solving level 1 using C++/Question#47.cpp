
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    cout << Message << endl;
    cin >> Number;
    
    return Number;
}


int main()
{
    int LoanAmount = ReadPositiveNumber("Please enter the loan amount : ");
    int MonthlyPayment = ReadPositiveNumber("please enter the monthly payment : ");

    cout << LoanAmount / MonthlyPayment << " Months\n";

}
