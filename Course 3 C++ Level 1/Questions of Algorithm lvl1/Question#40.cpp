#include <iostream>
using namespace std;


int main()
{
    int BillValue;
    float TotalBill, BillAfterService;

    cout << "Enter the BillValue : ";
    cin >> BillValue;

    BillAfterService = (BillValue * 10 / 100) + BillValue;

    TotalBill = (BillAfterService * 16 / 100) + BillAfterService;

    cout << TotalBill;

}