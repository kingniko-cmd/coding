#include <iostream>
using namespace std;
double circleArea(double r){
    return 3.14 * r * r;
}
double cylinderVolume(double r, double h) {
    return circleArea(r) * h;
}
double coneVolume(double r, double h){
    return cylinderVolume(r,h)/3;
}
int main() {
    double radius = 10.0;
    double height = 30.0;
    cout <<"Circle Area = " << circleArea(radius) <<endl;
    cout <<"Cylinder Volume = " << cylinderVolume(radius, height) <<endl;
    cout <<"Cone Volume = " << coneVolume(radius, height) <<endl;
}