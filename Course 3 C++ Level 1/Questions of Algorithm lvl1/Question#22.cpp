#include <iostream>
using namespace std;


float circleArea(short equalSide ,short Base)
{
    return ((3.14 / 4) * pow(Base, 2)) * ((2 * equalSide) - Base) / ((2 * equalSide) + Base);
}

int main()
{
    short equalSide, Base;

    cout << "Enter the equalSide length : ";
    cin >> equalSide;

    cout << "Enter the Base length : ";
    cin >> Base;

    cout << "The area of the Circle is : " << circleArea(equalSide , Base) << endl;
}
