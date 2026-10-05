#include <iostream>
using namespace std;

int main() {
    cout << "enter a number: ";
    int number;
    cin >> number;
    for (int i = 1; i <= number; i++) {
        if (i == 4) {
            break;
        }
        cout << i << " ";
    }
    return 0;
}