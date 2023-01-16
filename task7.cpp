#include <iostream>
using namespace std;

main()
{
    int hours1, minutes1, papertime, arivalTime, lateTime, hours2, minutes2;
    cout << "Enter Exam starting time (hour): ";
    cin >> hours1;
    cout << "Enter exam starting time (minutes) : ";
    cin >> minutes1;
    cout << "Enter student hour of arrival :";
    cin >> hours2;
    cout << "Enter student minute of arrival :";
    cin >> minutes2;
    int hours3, minutes3;
    int time = 60;
    papertime = (hours1 * 60) + minutes1;
    arivalTime = (hours2 * 60) + minutes2;
    lateTime = arivalTime - papertime;
    hours3 = lateTime / time;
    minutes3 = lateTime % time;
    if (papertime <= arivalTime || arivalTime <= 30)
    {
        cout << "On time" << endl;
        if (lateTime < 60)
        {
            cout << -1 * (lateTime) << " minutes before the start" << endl;
        }
        if (lateTime > 60)
        {
            cout << hours3 << ":" << minutes3 << "Hours before the start" << endl;
        }
    }

    else if (papertime <= arivalTime)
    {
        cout << "Late " << endl;
        if (lateTime < 60)
        {
            cout << lateTime << " minutes after the exam ." << endl;
        }
        if (lateTime > 60)
        {

            cout << hours3 << ":" << minutes3 << " hours after the exam ";
        }
    }
    if (arivalTime >= 30 && arivalTime < papertime)
    {
        cout << "Early " << endl;

        cout << -1 * lateTime << " minutes before the exam ." << endl;

        cout << -1 * hours3 << ":" << -1 * minutes3 << " before the start" << endl;
    }
}