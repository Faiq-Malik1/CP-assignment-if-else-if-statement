#include <iostream>
using namespace std;
int main()
{
    int brightness;

    cout << "Enter screen brightness percentage: ";
    cin >> brightness;

    if (brightness <= 10)
    {
        cout << "Very Low" << endl;
    }
    else if (brightness <= 30)
    {
        cout << "Low" << endl;
    }
    else if (brightness <= 60)
    {
        cout << "Medium" << endl;
    }
    else if (brightness <= 90)
    {
        cout << "High" << endl;
    }
    else if (brightness <= 100)
    {
        cout << "Maximum" << endl;
    }
    else
    {
        cout << "Invalid brightness" << endl;
    }
}