#include <iostream>
using namespace std;
int main()
{
    int rating;
    cout << "Enter rating between (1-5): ";
    cin >> rating;

    if(rating == 1)
    {
        cout << "Terrible" << endl;
    }
    else if(rating == 2)
    {
        cout << "Fair" << endl;
    }
    else if(rating == 3)
    {
        cout << "Good" << endl;
    }
    else if(rating == 4)
    {
        cout << "Very Good" << endl;
    }
    else if(rating == 5)
    {
        cout << "Excellent" << endl;
    }
    else
    {
        cout << "Invalid rating" << endl;
    }
}