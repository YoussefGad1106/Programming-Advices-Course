#include <iostream>
using namespace std;


float circleArea(float Circumference)
{
    return (pow(Circumference, 2) / (4 * 3.14));
}

int main()
{
    float Circumference;

    cout << "Enter the Circumference value : ";
    cin >> Circumference;

    cout << "The area of the Circle is : " << circleArea(Circumference) << endl;
}
