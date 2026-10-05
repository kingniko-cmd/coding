#include <iostream>

using namespace std;
int main() {
    
    cout << "WELCOME to the book Store!" << endl;
    cout << "Are you a member? (1/0)" << endl;
    string memberInput;
    cin >> memberInput;
    string name;

    bool member = (memberInput == "1");
    if (member) {
        cout << "Enter MemberID: " << endl;
        int memberId;
        cin >> memberId;
        switch (memberId) {
            case 1:
                name = "Ani";
                break;

            case 2:
                name = "Budi";
                break;
                
            case 3:
                name = "Wati"; 
                break;
        }
    } else { 
        name = "Guest";
    }
    cout << "Enter BookId: " << endl;
    string title;
    double price;
    int bookId;
    cin >> bookId;
    switch (bookId) {
        case 1:
            title = "harry potter";
            price = 250000;
            break;
        case 2:
            title = "Algorithm";
            price = 85000;
            break;
        case 3:
            title = "Calculus";
            price = 130000;
            break;
        case 4:
            title = "Sherlock Holmes";
            price = 270000;
            break;
        case 5:
            title = "Supernova";
            price = 180000;
            break;
    }
    double totalprice = price - (price * (member ? 0.15 : 0.05));
    cout << name << " is buying " << "Book Title: " << title << " for: " << "Rp. " << totalprice<< endl;


    cout << "INSERT YOUR CASH :";
    double cash;
    cin >> cash;
    if (cash < totalprice) {
        cout << "Insufficient cash!" << endl;
    } else {
        double change = cash - totalprice;
        cout << "Money Given: " << cash << "idr";
        cout << "Change: " << change << "idr" << endl;
    }
    cout << "Thank you for shopping with us!" << endl;
}