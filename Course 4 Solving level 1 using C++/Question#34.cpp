
#include <iostream>
using namespace std;


float ReadTotalSales()
{
	float TotalSales;

	cout << "Please Enter your Total Sales : \n";
	cin >> TotalSales;

	return TotalSales;
}

float CalculateCommission(float TotalSales)
{
	float CommissionRate;

	
	if (TotalSales > 1000000)
	{
		CommissionRate = 1.0;
	}
	else if (TotalSales > 500000 && TotalSales <= 1000000)
	{
		CommissionRate = 2.0;
	}
	else if (TotalSales > 100000 && TotalSales <= 500000)
	{
		CommissionRate = 3.0;
	}
	else if (TotalSales > 50000 && TotalSales <= 100000)
	{
		CommissionRate = 5.0;
		
	}
	else
	{
		return 0;
	}

	return (CommissionRate / 100) * TotalSales;
}

void PrintCommission(float Commission)
{
	cout << "Your Commsission is " << Commission << endl;
}

int main()
{
	PrintCommission(CalculateCommission(ReadTotalSales()));
}
