#include <iostream>

using namespace std;

int main() {
    int points;
    cout << "Enter your points: ";
    cin >> points;
    if (points <= 20) {
        cout << "Grade: E";
    } else if (points <= 40) {
        cout << "Grade: D";
    } else if (points <= 60) {
        cout << "Grade: C";
    } else if (points <= 80){
        cout << "Grade: B";
    } else {
        cout << "Grade: A";
    }
}