#include <iostream>
using namespace std;
void printdate(int day, int month, int year){
    cout << "The date is "<< day << " " << month << " " << year << endl;
}
void printdate(int day, string month, int year){
    cout << "The date is "<< day << " " << month << " " << year << endl;
}
int main() {
    printdate(5, 12, 2026);
    printdate(7, "Juli", 2027);
}