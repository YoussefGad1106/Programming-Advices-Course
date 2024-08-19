#include <iostream>
using namespace std;

void swap(int &A, int &B)
{
    int temp;

    temp = A;
    A = B;
    B = temp;

}

int main()
{
    int A, B;

    cout << "Please Enter the A : \n";
    cin >> A;

    cout << "Please Enter the B : \n";
    cin >> B;

    cout << "Before Swap A = " << A << " and B = " << B << endl;

    swap(A, B);

    cout << "After Swap A = " << A << " and B = " << B << endl;

}
