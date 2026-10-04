#include <iostream>
using namespace std;
int main()
{
    int hours;
    int fee;

    cout << "Enter parking hours: ";
    cin >> hours;

    if (hours <= 1)
    {
        fee = 50;
    }
    else if (hours <= 3)
    {
        fee = 100;
    }
    else if (hours <= 5)
    {
        fee = 200;
    }
    else if (hours <= 8)
    {
        fee = 300;
    }
    else
    {
        fee = 500;
    }

    cout << "Parking Fee: " << fee;

}