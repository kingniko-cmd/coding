// #include <iostream>
// using namespace std;

// void   sayHello(string name, int number = 7){
//     cout << "Hello Good Morning " << name << endl;
//     cout << "You have Sellect Number " << number << endl;
// }
// int main (){
//     sayHello("Ani", 5);
//     sayHello("Budi");
//     sayHello("Wati", 11);

// }
#include <iostream>
using namespace std;
int rectangleArea(int width, int length){
    return width * length;
}
int main() {
    int rect = rectangleArea (5, 4);
    cout << rect;
    
}