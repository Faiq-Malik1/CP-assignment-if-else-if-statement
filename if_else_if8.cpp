#include <iostream>
using namespace std;
int main()
{
    int speed;

    cout << "Enter wind speed in km/h: ";
    cin >> speed;

    if (speed < 10)
    {
        cout << "Calm" << endl;
    }
    else if (speed < 25)
    {
        cout << "Breeze" << endl;
    }
    else if (speed < 50)
    {
        cout << "Windy" << endl;
    }
    else if (speed < 75)
    {
        cout << "Strong Wind" << endl;
    }
    else
    {
        cout << "Storm" << endl;
    }
}