#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"entre three sides of the triangle"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a== b && b==c)
    {
        cout<<"equilateral triangle"<<endl;
    }
    else if (a==b || b==c || a==c)
    {
        cout<<"isosceles triangle"<<endl;
    }
    else
    {
        cout<<"scalene triangle"<<endl;
    }
}