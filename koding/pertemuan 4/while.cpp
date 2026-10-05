#include <iostream>

using namespace std;

int main() {
    // int i = 0;
    // while (i <= 10) {
    //     cout << i << endl;
    //     i+=3;
    // }
    bool again=2;
    while (again) {  
    int number;
    cout << "Input Number: ";
    cin >> number;
    cout << " Numbers: " << number << endl;
    cout << "Do you want to do it again? (1/0): ";
    cin >> again;
    }
}