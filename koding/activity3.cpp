#include <iostream>

using namespace std;

int main() {
    int password;
    cout << "Enter the password: ";
    cin >> password;
    if (password == 1234) {
        cout << "Password matched.";
    } else {
        cout << "Password does not match.";
    }

}