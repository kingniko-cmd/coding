#include <iostream>
#include <string>
using namespace std;

int main() {
    string member[5]= {"Ani", "Budi", "Wati", "Iwan", "Santi"};

    int memberID, entrancefee;
    string name;
    bool isMember;

     cout << "Welcome to the book store!" << endl;
     cout << "Are you a member?";
     cin >> isMember;

    if (isMember) {
        cout << "Enter memberID (0-4) : ";
        cin >> memberID;
        name = member[memberID];
        entrancefee = 0;

    } else {
        name = "Guest";
        entrancefee = 1000;
    }
    cout << " Welcome " << name <<" Your enterancefee is " << entrancefee << " rupiah " << endl;
    string title[5] = {"Harry Potter", "Algorithm", "Calculus", "Sherlock Holmes", "Supernova"};
    int price[5] = {250000, 85000, 130000, 270000, 180000};
    bool available[5] = {true, true, false, true, true};
 
    cout << "Below are available books" << endl;
    for (int i = 0; i < 5; i++) {
        if (available[i] == false) {
            continue;
        }
        cout << "Book ID " << i << ", title " << title[i] << ", price " << price[i] << endl;
    }
    int bookID;
    cout << "\nSelect book ID: ";
    cin >> bookID;
    int total = entrancefee + price[bookID];
    cout << "Your selected book is " << title[bookID] << ", with a total price of " << total << endl;

    return 0;
}