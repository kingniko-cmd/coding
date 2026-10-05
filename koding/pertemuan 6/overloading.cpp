#include <iostream>
using namespace std;
int sumNumbers(int num1, int num2){
    return num1 + num2;
}
int sumNumbers(int num1, int num2, int num3){
    return num1 + num2 + num3;
}
int main() {
    cout << sumNumbers(4, 5) << endl;
    cout << sumNumbers(4, 5, 6) << endl;
}