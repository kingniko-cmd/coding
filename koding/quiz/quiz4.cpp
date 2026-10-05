#include <iostream>
using namespace std;
int main (){
bool seat[5][6] = {false};

    int repeat = 1;
    cout << "Welcome to the movie booking system" << endl;
    while (repeat == 1) {
        cout << "\nSeatmap:" << endl;
        cout << "  0 1 2 3 4 5" << endl;

        for (int i = 0; i < 5; i++) {
            cout << i << " ";
            for (int j = 0; j < 6; j++) {
                if (seat[i][j]) {
                    cout << "V ";
                } else {
                    cout << "- ";
                }
            }
            cout << endl;
        }
        int row, col;
        cout << "\nSelect row number: ";
        cin >> row;
        cout << "Select column number: ";
        cin >> col;

  
        if (seat[row][col]) {
            cout << "\nSorry, the seat is occupied" << endl;
        } else {
            seat[row][col] = true;
            cout << "\nYou have purchased seat [" << row << "," << col << "]" << endl;
        }
        cout << "Select seat again (1/0)? ";
        cin >> repeat;
    }
    cout << "\nCashier closed, movie will start soon!" << endl;
}