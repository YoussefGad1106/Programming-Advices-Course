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
    int howManyMonths = ReadPositiveNumber("please enter the monthly payment : ");

    cout << float(LoanAmount / howManyMonths) << endl;

}
