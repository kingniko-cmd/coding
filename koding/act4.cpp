#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int reminder = number % 2;
    if (reminder == 0) {
        cout << "even.";
    } else {
        cout << "odd.";
    }

}