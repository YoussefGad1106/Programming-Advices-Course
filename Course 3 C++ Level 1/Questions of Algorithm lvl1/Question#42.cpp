#include <iostream>
using namespace std;


int main()
{
	short Days, Hours, Minutes, Seconds;

        cout << "Enter the number of days : ";
        cin >> Days;

        cout << "Enter the number of hours : ";
        cin >> Hours ;

        cout << "Enter the number of minutes : ";
        cin >> Minutes ;

        cout << "Enter the number of seconds  : ";
        cin >> Seconds ;

        cout << (Days * 24 * 3600) + (Hours * 3600) + (Minutes * 60) + Seconds << " Seconds\n";

}