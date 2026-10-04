#include <iostream>
using namespace std;
int main()
{
    float data;
    float cost;

    cout << "Enter mobile data used in GB: ";
    cin >> data;

    if (data <= 1)
    {
        cost = 100;
    }
    else if (data <= 3)
    {
        cost = 200;
    }
    else if (data <= 5)
    {
        cost = 300;
    }
    else if (data <= 10)
    {
        cost = 500;
    }
    else
    {
        cost = 800;
    }

    cout << "Data Charges: " << cost;

}