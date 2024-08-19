#include <iostream>
using namespace std;


float circleArea(short Diameter)
{
    return ((3.14 / 4) * pow(Diameter, 2));
}

int main()
{
    short Diameter;

    cout << "Enter the diameter length : ";
    cin >> Diameter;

    cout << "The area of the Circle is : " << circleArea(Diameter) << endl;
}
