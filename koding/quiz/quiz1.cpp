#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float radius, height, volume;
    float pi = 22.0/7.0;
    cout << "Enter the radius of the cone: ";
    cin >> radius;
    cout << "Enter the height of the cone: ";
    cin >> height;
    volume = (1.0/3.0) * pi * pow(radius, 2) * height;
    cout << "The volume of the cone is: " << volume << endl;
}