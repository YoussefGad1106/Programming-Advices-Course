#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;

    cout << "Please enter a number to get its half : ";
    cin >> number;

    return number;
}

float GetHalf(int num)
{
    return num / 2.0;
}

void PrintHalf(int Number)
{
    cout << "Half of " << Number << " is " << GetHalf(Number) << endl;
}

int main()
{
    PrintHalf(ReadNumber());
}
