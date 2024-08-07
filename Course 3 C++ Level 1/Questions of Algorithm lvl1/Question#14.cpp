#include <iostream>
using namespace std;


int main()
{
    int Number1, Number2, Temp;

    cout << "Enter the First Number : ";
    cin >> Number1;

    cout << "Enter the Second Number : ";
    cin >> Number2;

    cout << Number1 << endl;
    cout << Number2 << endl;

    cout << endl;

    Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;

    cout << Number1 << endl;
    cout << Number2 << endl;

    

}