#include <iostream>

using namespace std;

int main() {
    double balance = 300000;
    int pin = 1234;
    int inputPin;
    double amount;
    
    cout << "Enter your PIN: ";
    cin >> inputPin;
    
    if(inputPin != pin) {
        cout << "Incorrect PIN." << endl;
    } else {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        
    }
    
}