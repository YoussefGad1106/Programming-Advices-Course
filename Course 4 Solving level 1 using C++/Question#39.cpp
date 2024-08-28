#include <iostream>
using namespace std;

float ReadTotalBill()
{
	float TotalBill;

	cout << "Please Enter the Total Bill amount : " << endl;
	cin >> TotalBill;

	return TotalBill;      
}

float ReadCashPaid()
{
	float CashPaid;

	cout << "Please Enter the CashPaid : " << endl;
	cin >> CashPaid;

	return CashPaid;
}

float CalculateRemainder(float CashPaid, float TotalBill)
{
	return CashPaid - TotalBill;
}

void PrintRemainder(float Remainder)
{
	cout << "The Remainder = " << Remainder << endl;
}

int main()
{
	PrintRemainder(CalculateRemainder(ReadCashPaid(), ReadTotalBill()));
}
