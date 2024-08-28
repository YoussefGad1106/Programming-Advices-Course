
#include <iostream>
using namespace std;


int ReadBillValue()
{
    int BillValue;
    
    cout << "Enter the BillValue : ";
    cin >> BillValue;

    return BillValue;
}

float CalculateServices(int BillValue)
{
    float BillAfterService;

    BillAfterService = (BillValue * 10 / 100) + BillValue;

    return BillAfterService;
}

float CalculateTaxAndGetTotalBill (float BillAfterService)
{
    float TotalBill;
    
    TotalBill = (BillAfterService * 16 / 100) + BillAfterService;

    return TotalBill;
}


void PrintTotalBill(float Total)
{
    cout << "The Total Bill is " << Total << endl;
}

int main()
{
    int N = ReadBillValue();
    
    PrintTotalBill(CalculateTaxAndGetTotalBill(CalculateServices(N)));

}
