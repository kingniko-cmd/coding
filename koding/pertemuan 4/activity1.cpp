#include <iostream>
using namespace std;
int main() {
    // int x =5;
    // cout << x << endl;
    // x++;
    // cout << x << endl;
    // cout << (x += 1) << endl;
    // cout << (x += 2) << endl;
    // cout << (x *= 3) << endl;
    // cout << (x /= 9) << endl;   

    // for (int i = 10; i >= 3; i--) {
    //     cout << i << endl;
    // }


    cout << "Input Number 1: ";
    int num1;
    cin >> num1;
    cout << "Input Number 2: ";
    int num2;
    cin >> num2;
    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            cout << i << " is even" << endl;
        } else {
            cout << i << " is odd" << endl;
        }
    }
}