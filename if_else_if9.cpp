#include <iostream>
using namespace std;
int main()
{
    int speed;

    cout << "Enter internet speed in Mbps: ";
    cin >> speed;

    if (speed < 5)
    {
        cout << "Very Slow" << endl;
    }
    else if (speed < 20)
    {
        cout << "Slow" << endl;
    }
    else if (speed < 50)
    {
        cout << "Normal" << endl;
    }
    else if (speed < 100)
    {
        cout << "Fast" << endl;
    }
    else
    {
        cout << "Very Fast" << endl;
    }
}