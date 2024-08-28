#include <iostream>
using namespace std;


struct stTimes
{
    short Days, Hours, Minutes, Seconds;
};

stTimes ReadTime()
{
    stTimes time;

    cout << "Enter the number of days : ";
    cin >> time.Days;

    cout << "Enter the number of hours : ";
    cin >> time.Hours;

    cout << "Enter the number of minutes : ";
    cin >> time.Minutes;

    cout << "Enter the number of seconds  : ";
    cin >> time.Seconds;

    return time;
}

float taskDuration(stTimes time)
{
    return (float)(time.Days * 24 * 3600) + (time.Hours * 3600) + (time.Minutes * 60) + time.Seconds;
}
int main()
{
     cout << "The Task Duration is : " << taskDuration(ReadTime()) << endl;
}
