#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Enter the Number : ";
    cin >> Number;

    return Number;
}


void PowNumber(int Number)
{
    cout << "The Number " << Number << " ^ 2 = " << pow(Number, 2) << endl;
    cout << "The Number " << Number << " ^ 3 = " << pow(Number, 3) << endl;
    cout << "The Number " << Number << " ^ 4 = " << pow(Number, 4) << endl;

}

int main()
{
    PowNumber(ReadNumber());
}
