// #include <iostream>
// using namespace std;
// int fact (int fact){
//     int result = 1;
//     for(int i = 1; i <= fact; i++){
//         result *= i;
//     }
//     return result;
// }
// int main() {

//     int result = fact(5) + fact(4);
//     cout << "The Result Is " << result << endl;

// }
#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int result = fact(5) + fact(4);
    cout << "The result is "  << result << endl;
}