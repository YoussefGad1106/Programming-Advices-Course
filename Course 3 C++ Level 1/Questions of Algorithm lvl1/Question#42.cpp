#include <iostream>
using namespace std;


struct Times
{
    short Days, Hours, Minutes, Seconds;
};

float taskDuration(Times time)
{  
    return (time.Days * 24 * 3600) + (time.Hours * 3600) + (time.Minutes * 60) + time.Seconds ;
}
int main()
{
    Times time;
    
    cout << "Enter the number of days : ";
    cin >> time.Days;

    cout << "Enter the number of hours : ";
    cin >> time.Hours;

    cout << "Enter the number of minutes : ";
    cin >> time.Minutes;

    cout << "Enter the number of seconds  : ";
    cin >> time.Seconds;

    cout << "The Task Duration is : " << taskDuration(time) << endl;
}
