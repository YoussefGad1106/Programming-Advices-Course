#include <iostream>
using namespace std;


int main()
{
    int numberOfSeconds , Days , Hours , Minutes ;

    cout << "Enter the total number of seconds : ";
    cin >> numberOfSeconds;

    Days = numberOfSeconds / 24 / 3600 ;

    numberOfSeconds -= Days * 24 * 3600;

    Hours = numberOfSeconds / 3600;

    numberOfSeconds -= Hours * 3600;

    Minutes = numberOfSeconds / 60;

    numberOfSeconds -= Minutes * 60;

    cout << Days << ":" << Hours << ":" << Minutes << ":" << numberOfSeconds << endl;



    

}