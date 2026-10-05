#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main() {
    int repeat = 1;
    
    while (repeat == 1) {
        cout << "[1] Decimal to binary" << endl;
        cout << "[2] Binary to decimal" << endl;
        
        int option;
        cout << "Input your option : ";
        cin >> option;
        
        if (option == 1) {
            int decimal;
            cout << "Input your decimal : ";
            cin >> decimal;
            cout << "Your binary is : " << decimalToBinary(decimal) << endl;
        } else if (option == 2) {
            string binary;
            cout << "Input your binary : ";
            cin >> binary;
            cout << "Your decimal is: " << binaryToDecimal(binary) << endl;
        }
        
        cout << "Repeat? [0:No/1:Yes] : ";
        cin >> repeat;
        cout << endl;
    }
    
    cout << "Ends" << endl;
}