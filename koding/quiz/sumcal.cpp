#include <iostream>

using namespace std;

int main() {
    int number;
    int again = 1;
    int total = 0;
    while (again) {
        cout << "Input Your Number: ";
        cin >> number;
        total += number;
        cout <<" Current total: " << total << endl;
        cout << "Do you want to do it again? (1/0): ";
        cin >> again;
    }
    cout << "The total is: " << total << endl;
} 