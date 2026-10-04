#include <iostream>
using namespace std;
int main()
{
    int battery;
    cout << "Enter battery percentage: ";
    cin >> battery;

    if(battery == 100)
    {
        cout << "Full" << endl;
    }
    else if(battery >= 75 && battery <=99)
    {
        cout << "High" << endl;
    }
    else if(battery >= 50 && battery <= 74)
    {
        cout << "Meduim" << endl;
    }
    else if(battery >=20 && battery <= 49)
    {
        cout << "Low" << endl;
    }
    else if(battery >= 1 && battery <= 19)
    {
        cout << "Critical" << endl;
    }
    else
    {
        cout << "Invalid number entered" << endl;
    }
}