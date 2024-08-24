#include <iostream>
using namespace std;

struct stNumbers
{
    int Num1, Num2, Num3;
};

stNumbers ReadNumbers()
{
    stNumbers Nums;
   
    cout << "Enter the First Number : ";
    cin >> Nums.Num1;

    cout << "Enter the Second Number : ";
    cin >> Nums.Num2;

    cout << "Enter the Third Number : ";
    cin >> Nums.Num3;

    return Nums;
}

int Sum3Numbers(stNumbers Nums)
{
    return Nums.Num1 + Nums.Num2 + Nums.Num3;
}

void PrintAverage(int Sum)
{
    cout << "\nThe Average is " << Sum/3.0 << endl;
}

int main()
{
    PrintAverage(Sum3Numbers(ReadNumbers()));
}
