#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int number;
    int sum = 0;
    cout << "How Many Numbers?";
    cin >> number;
    for (i; i <= number; i++) {
        cout << "Input Number " << i << ": ";
        int input;
        cin >> input;
        sum += input;
    }
    cout << "The total is: " << sum << endl;
}