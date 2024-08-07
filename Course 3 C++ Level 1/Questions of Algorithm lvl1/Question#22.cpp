#include <iostream>
using namespace std;


int main()
{
    int equalSide, Base;

    cout << "Enter the equalSide length : ";
    cin >> equalSide;
    
    cout << "Enter the Base length : ";
    cin >> Base;

    cout << ((3.14 / 4) * (Base * Base)) * ((2 * equalSide) - Base) / ((2 * equalSide) + Base) << endl;


}