#include <iostream>
using namespace std;
int x = 5;
void printX(){
    int x = 7;
    cout << "x inside function = " << x << endl;
}
int main() {
    cout << "x global = " << x << endl;
    printX();
}