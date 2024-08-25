#include <iostream>
using namespace std;

void ReadNumbers(int& A, int& B)
{
    cout << "Please Enter the A : \n";
    cin >> A;

    cout << "Please Enter the B : \n";
    cin >> B;
}

void swap(int& A, int& B)
{
    int temp;

    temp = A;
    A = B;
    B = temp;

}

void PrintBeforeSwap(int A, int B)
{
    cout << "\nBefore Swap A = " << A << " and B = " << B << endl;
}

void PrintAfterSwap(int A, int B)
{
    swap(A, B);
    cout << "\nAfter Swap A = " << A << " and B = " << B << endl;

}

int main()
{
    int A, B;

    ReadNumbers(A, B);
    PrintBeforeSwap(A, B);
    PrintAfterSwap(A, B);
}
    
