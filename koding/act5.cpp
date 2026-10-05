#include <iostream>

using namespace std;

int main() {
    int time;
    cout << "Enter Time (0-24): ";
    cin >> time;
    if (time < 12) {
        cout << "Good Morning!";
    } else if (time < 18) {
        cout << "Good Afternoon!";
    } else {
        cout << "Good Evening!";
    }
}