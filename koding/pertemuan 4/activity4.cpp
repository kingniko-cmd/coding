#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int sum = 0;
    cout << "Input Number 1: ";
    cin >> num1;
    cout << "Input Number 2: ";
    cin >> num2;
    int i = num1 + 1;
    while (i < num2) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    cout <<"Sum: " << sum << endl;
    return 0;
}