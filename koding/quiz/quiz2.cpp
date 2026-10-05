#include <iostream>
using namespace std;

int main()
{
    int numbers;
    cout << "Enter a three digit number: ";
    cin >> numbers;
    int hundreds = numbers / 100;
    int tens = (numbers / 10) % 10;
    int ones = numbers % 10;
    cout << "The sum of the digits of " << numbers << " is " << hundreds + tens + ones << endl;
}