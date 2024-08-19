#include <iostream>
using namespace std;


float circleArea(short Side)
{   
    return ((3.14 / 4) * pow(Side, 2));
}

int main()
{
    short Side;

    cout << "Enter the Side length : ";
    cin >> Side;


    cout << "The area of the Circle is : " << circleArea(Side) << endl;
}
