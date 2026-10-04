#include <iostream>
using namespace std;
int main()
{
    int rating;

    cout << "Enter book rating (1-10): ";
    cin >> rating;

    if (rating <= 2)
    {
        cout << "Very Poor" << endl;
    }
    else if (rating <= 4)
    {
        cout << "Poor" << endl;
    }
    else if (rating <= 6)
    {
        cout << "Average" << endl;
    }
    else if (rating <= 8)
    {
        cout << "Good" << endl;
    }
    else if (rating <= 10)
    {
        cout << "Excellent" << endl;
    }
    else
    {
        cout << "Invalid rating" << endl;
    }
}