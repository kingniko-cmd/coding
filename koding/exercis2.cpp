#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double radius = 10;
    double height = 40;
    const double pi = 22.0/7.0;
    double volume = pi * pow(radius, 2) * height;
    // cout << radius << endl;
    // cout << height << endl;
    // cout << pi << endl;
    cout << "A cylinder with radius " << radius << " and height " << height << " has a volume of " << volume << endl;
}