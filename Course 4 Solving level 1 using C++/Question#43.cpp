
#include <iostream>
using namespace std;


void Converter(int numberOfSeconds)
{
    short Days, Hours, Minutes;

    Days = numberOfSeconds / 24 / 3600;

    numberOfSeconds -= Days * 24 * 3600;

    Hours = numberOfSeconds / 3600;

    numberOfSeconds -= Hours * 3600;

    Minutes = numberOfSeconds / 60;

    numberOfSeconds -= Minutes * 60;

    cout << Days << ":" << Hours << ":" << Minutes << ":" << numberOfSeconds << endl;

}

int main()
{
    int numberOfSeconds;

    cout << "Enter the total number of seconds : ";
    cin >> numberOfSeconds;

    Converter(numberOfSeconds);
}

