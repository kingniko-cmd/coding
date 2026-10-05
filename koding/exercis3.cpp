#include <iostream>
using namespace std;

int main()
{
    int number = 341;
    int tensAndOnes = number / 10 % 10;
    cout << "The middle digit of " << number << " is " << tensAndOnes << endl;
}