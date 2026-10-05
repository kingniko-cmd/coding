#include <iostream>
using namespace std;

int main(){
    string member[3];
    member[0] = "Ani";
    member[1] = "Budi";
    member[2] = "Wati";
    // for ( int i = 0; i < 3; i++)
    // {
    //     cout << member [i] << endl;
    // }
    for (string n:member)
    {
        cout << n << endl;
    }
    
    
}