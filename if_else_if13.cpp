#include <iostream>
using namespace std;
int main()
{
    float weight;
    float shippingCost;

    cout << "Enter package weight in kg: ";
    cin >> weight;

    if (weight <= 1)
    {
        shippingCost = 200;
    }
    else if (weight <= 3)
    {
        shippingCost = 350;
    }
    else if (weight <= 5)
    {
        shippingCost = 500;
    }
    else if (weight <= 10)
    {
        shippingCost = 800;
    }
    else
    {
        shippingCost = 1200;
    }

    cout << "Shipping Cost: " << shippingCost;
}